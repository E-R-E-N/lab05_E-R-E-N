CXX_FLAG = --std=c++11 -g

all: evalfull

evalfull: 
	g++ $(CXX_FLAG) -o evalfull evalfull.cpp

clean:
	rm -f evalfull *.o
