#CCOPT= -Wall -O0 -fomit-frame-pointer -g
CCOPT= -Wall -O1 -g
#CCOPT= -Wall -O2 -g
#CCOPT= -Wall -O3 -g

ALL: io.o temps.o main.o
	g++ -o exp4 io.o temps.o main.o

re : clean ALL

io.o : io.cpp io.h
	g++ ${CCOPT} -c io.cpp

temps.o : temps.cpp temps.h
	g++ ${CCOPT} -c temps.cpp

main.o : main.cpp temps.h io.h
	g++ ${CCOPT} -c main.cpp

clean :
	rm -f *.o
	rm -f exp4.exe
	rm -rf KEIL/Obj
	rm -rf KEIL/DebugConfig
	rm -rf KEIL/RTE
	rm -f KEIL/*.lst
	rm -f KEIL/*.scvd
	rm -f KEIL/*.uvguix.*
