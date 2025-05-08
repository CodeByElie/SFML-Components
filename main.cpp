#include <SFML/Graphics.hpp>
#include <iostream>
#include "./include/sfml-components/config.hpp"
#include "./include/sfml-components/Box.hpp"

int main()
{
    sf::RenderWindow window(sf::VideoMode({900, 700}), "App");
    Box box1({
        .position = {100, 100},
        .width = 700,
        .height = 200,
        .borderRadius = 50,
    });

    while (window.isOpen())
    {
        while (const std::optional event = window.pollEvent())
        {
            if (event->is<sf::Event::Closed>())
                window.close();
        }
        window.clear(backgroundColor);
        window.draw(box1);
        window.display();
    }

    return 0;
}