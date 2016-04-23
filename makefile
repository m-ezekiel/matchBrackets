#makefile

appTest: Driver.o CharStack.o
	g++ Driver.o CharStack.o -o appTest

Driver.o: Driver.cpp CharStack.h
	g++ -c Driver.cpp

CharStack.o: CharStack.cpp CharStack.h
	g++ -c CharStack.cpp
