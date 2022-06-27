CFLAGS= $(pkg-config --cflags opencv)
LIBS= $(pkg-config --libs opencv) 
all:
	g++ -Wall -g dummy.cpp $(CFLAGS) $(LIBS) -o dummy
