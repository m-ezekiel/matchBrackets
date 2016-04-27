#makefile

appTest: Driver.o CharStack.o
	g++ csDriver.o CharStack.o -o appTest

Driver.o: csDriver.cpp CharStack.h
	g++ -c csDriver.cpp

CharStack.o: CharStack.cpp CharStack.h
	g++ -c CharStack.cpp
