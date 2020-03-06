#compile and link the application
all: testLeaves testDeep testBalance

testLeaves: testLeaves.o
	g++ testLeaves.o -o testLeaves
	./testLeaves

testLeaves.o: testLeaves.cpp
	g++ -c testLeaves.cpp

part1: part1.o
	g++ -o part1 part1.o

part1.o: part1.cpp
	g++ -c part1test.cpp

clean:
	@echo "Cleaning up..."
	rm -rf part1 part1.o *~
