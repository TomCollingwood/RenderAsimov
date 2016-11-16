CFLAGS=-I${RMANTREE}/include
LIBS=-L${RMANTREE}/lib -lprman -lm
RENDERER=render
DYLD_LIBRARY_PATH=${RMANTREE}/lib

SCENE=book

${SCENE}.rib : ${SCENE}.gen
	DYLD_LIBRARY_PATH=${RMANTREE}/lib ./${SCENE}.gen >${SCENE}.rib

${SCENE}.gen : ${SCENE}.c
	cc ${CFLAGS} -o ${SCENE}.gen  ${SCENE}.c ${LIBS}

clean :
	rm -f *.tiff *.rib *.gen
