all : app

SRCS = $(wildcard src/*.cpp)

app : main.cpp
	g++ -std=c++17 -Wall -o app main.cpp $(SRCS) -lsfml-graphics -lsfml-window -lsfml-system
	@echo "Built app"

clean :
	rm app