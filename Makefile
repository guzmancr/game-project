
CXX=g++
CXXFLAGS=-Wall -g
SRCS = main.cpp Player.cpp boardgame.cpp space.cpp Action.cpp card.cpp bank.cpp
OBJ = $(SRCS:.cpp=.o)

all: main

main: $(OBJ)
	$(CXX) $(CXXFLAGS) -o main $(OBJ)
.cpp.o:
	$(CXX) $(CXXFLAGS) -c $<


Action.o: Action.h

space.o: space.h Action.h

boardgame.o: boad.h space.h Action.h

Player.o:Player.h space.h Action.h

bank.o:bank.h Player.h space.h Action.h

card.o: card.h Player.h space.h Action.h

main.o: boad.h card.h Player.h space.h Action.h

clean:
	rm -f *.o *~

