#compile, link, and run the application
all: part1
	./part1

#link part1.o to executable "part1"
part1: part1.o
	g++ -o part1 part1.o

#compile the part1.cpp to part1.o
part1.o: part1.cpp
	g++ -c part1test.cpp

#remove built files
clean:
	@echo "Cleaning up..."
	rm -rf part1 part1.o *~
