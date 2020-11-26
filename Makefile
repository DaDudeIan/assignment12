all : compile test
	g++ -std=c++17 Clock.o test_Clock.o -o Clock
	./Clock

compile : Clock.cpp
	g++ -std=c++17 -c $?

test : test_Clock.cpp
	g++ -std=c++17 -c $?



remove:
	rm -*.out
