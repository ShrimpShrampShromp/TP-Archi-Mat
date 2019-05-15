CCOPT= -Wall -O0 -fomit-frame-pointer -g
#CCOPT= -Wall -O1 -g
#CCOPT= -Wall -O2 -g
#CCOPT= -Wall -O3 -g

ALL: io.o main.o
	gcc -o exp3 io.o main.o

re : clean ALL

io.o : io.c io.h
	gcc ${CCOPT} -c io.c

main.o : main.c io.h
	gcc ${CCOPT} -c main.c

clean :
	rm -f *.o
	rm -f exp3.exe
	rm -rf KEIL/Obj
	rm -rf KEIL/DebugConfig
	rm -rf KEIL/RTE
	rm -f KEIL/*.lst
	rm -f KEIL/*.scvd
	rm -f KEIL/*.uvguix.*
