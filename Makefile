all: test 

test: test.o
	g++ test.o -o hello

test.o: test.cpp
	g++ -c -std=c++14 test.cpp
clean:
	rm -rf *.o hello
