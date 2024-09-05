CFLAGS = -std=c++17 -O2

LDFLAGS =  -lglfw -lvulkan -ldl -lpthread -lX11 -lXxf86vm -lXi

triangle: main.cpp
	g++ $(CFLAGS) -o triangle main.cpp $(LDFLAGS)

.PHONY: test clean

test: VulkanTest
	./VulkanTest

clean:
	rm -f VulkanTest