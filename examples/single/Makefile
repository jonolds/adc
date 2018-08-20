CXX=g++
CXXFLAGS=-I/home/pi/adc -W -Wall
LDFLAGS=-lads1015 -L/home/pi/adc
EXEC=single
SRC=singleended.cpp
OBJ=$(SRC:.cpp=.o)

all: $(EXEC)

$(EXEC): $(OBJ)
	$(CXX) -o $@ $^ $(LDFLAGS)

$(OBJ): $(SRC)
	$(CXX) -o $@ -c $< $(CXXFLAGS)

clean:
	rm -f $(OBJ)

mrproper: clean
	rm -f $(EXEC)
