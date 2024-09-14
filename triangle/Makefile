CFLAGS = -std=c++17 -O2

LDFLAGS =  -lglfw -lvulkan -ldl -lpthread -lX11 -lXxf86vm -lXi

SRC_FILES = $(wildcard src/app/*.cpp)
HEADER_FILES = $(wildcard src/app/*.hpp)
OBJ_FILES = $(patsubst src/app/%.cpp,build/%.o,$(SRC_FILES))


all: triangle

 

build: 
	mkdir -p build

build/%.o: src/app/%.cpp $(HEADER_FILES) build
	g++ -c $(ARGS) $< -o $@

triangle: src/main.cpp $(OBJ_FILES)
	g++ $(CFLAGS) $(ARGS) -o triangle $<  $(OBJ_FILES) $(LDFLAGS)

.PHONY: triangle clean


clean:
	rm -f triangle
	rm -rf build