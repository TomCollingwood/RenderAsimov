CFLAGS=-I${RMANTREE}/include
LIBS=-L${RMANTREE}/lib -lprman -lm
RENDERER=render
DYLD_LIBRARY_PATH=${RMANTREE}/lib

SCENE=book
length=2
thickness=0.5
spinecurve=0.03
lipdepth=0.03
height=3
ridgedep1=0.05
ridgedep2=0.02
rotatex=0.0
rotatey=0
rotatez=30

all: RIB/book.rib RISpec/book.gen RIB/pages.rib RISpec/pages.gen RIB/position.rib RISpec/position.gen shaders/randomDisk.oso shaders/randomDiskpaper.oso shaders/tex.oso
	prman -d it RIB/main.rib

RIB/book.rib : RISpec/book.gen
	LD_LIBRARY_PATH=${RMANTREE}/lib ./RISpec/book.gen $(length) $(thickness) $(spinecurve) $(lipdepth) $(height) $(ridgedep1) $(ridgedep2) >RIB/book.rib

RISpec/book.gen : RISpec/book.c Makefile
	cc ${CFLAGS} -o RISpec/book.gen  RISpec/book.c ${LIBS}

RIB/pages.rib : RISpec/pages.gen
	LD_LIBRARY_PATH=${RMANTREE}/lib ./RISpec/pages.gen $(thickness) $(length) $(height) $(ridgedep1) $(ridgedep2) >RIB/pages.rib

RISpec/pages.gen : RISpec/pages.c Makefile
	cc ${CFLAGS} -o RISpec/pages.gen  RISpec/pages.c ${LIBS} 

RIB/position.rib : RISpec/position.gen
	LD_LIBRARY_PATH=${RMANTREE}/lib ./RISpec/position.gen $(length) $(thickness) $(height) $(rotatex) $(rotatey) $(rotatez) >RIB/position.rib

RISpec/position.gen : RISpec/position.c Makefile
	cc ${CFLAGS} -o RISpec/position.gen  RISpec/position.c ${LIBS}

shaders/randomDisk.oso : shaders/randomDisk.osl
	cd shaders && oslc randomDisk.osl 

shaders/randomDiskpaper.oso : shaders/randomDiskpaper.osl
	cd shaders && oslc randomDiskpaper.osl 

shaders/tex.oso : shaders/texture.osl 
	cd shaders && oslc texture.osl 

clean :
	rm -f *.tiff *.gen book.rib position.rib pages.rib
