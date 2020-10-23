all: main.o calculator.o
	g++ -o slab3 main.o calculator.o

main.o: main.cpp
	g++ -c main.cpp

calculator.o: calculator.cpp
	g++ -c calculator.cpp

clean:
	rm *.o slab3
