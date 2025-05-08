all : app

app : main.cpp
	g++ -std=c++17 -Wall -o app main.cpp ./src/box.cpp -lsfml-graphics -lsfml-window -lsfml-system