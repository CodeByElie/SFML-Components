#include <SFML/Graphics.hpp>
#include <iostream>
#include "./include/sfml-components/config.hpp"
#include "./include/sfml-components/box.hpp"

int main()
{
    sf::RenderWindow window(sf::VideoMode({900, 700}), "App");
    Box box1({
        .position = {50, 100},
        .width = 200,
        .height = 200,
        .borderRadius = 20,
    });
    Box header({
        .position = {0, 0},
        .width = 900,
        .height = 50,
        .fillColor = secondaryColor
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
        window.draw(header);
        window.display();
    }

    return 0;
}