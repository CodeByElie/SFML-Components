#include <SFML/Graphics.hpp>
#include <iostream>
#include "./include/sfml-components/config.hpp"
#include "./include/sfml-components/Box.hpp"
#include "./include/sfml-components/Text.hpp"

int main()
{

    sf::RenderWindow window(sf::VideoMode({900, 700}), "App");
    Box box({
        .position = {100, 100},
        .width = 700,
        .height = 200,
        .borderRadius = 50,
    });
    Text text({.text = "Hello! \nSalut! \nHola! \nGuten Tag!",
               .fontSize = 24,
               .font = sf::Font{"./assets/fonts/arial/ARIALI.TTF"},
               .position = {150, 150}});

    while (window.isOpen())
    {
        while (const std::optional event = window.pollEvent())
        {
            if (event->is<sf::Event::Closed>())
                window.close();
        }
        window.clear(backgroundColor);
        window.draw(box);
        window.draw(text);
        window.display();
    }

    return 0;
}