#include "../include/sfml-components/Window.hpp"
#include <SFML/Graphics.hpp>

Window::Window(const PARAMETERS &parameters) : window{sf::VideoMode({parameters.width, parameters.height}), parameters.title}
{
}

void Window::add(const sf::Drawable &widget)
{
    widgets.push_back(&widget);
}

void Window::run()
{
    while (window.isOpen())
    {
        while (const std::optional event = window.pollEvent())
        {
            if (event->is<sf::Event::Closed>())
                window.close();
        }
        window.clear(backgroundColor);
        for (const auto &widget : widgets)
        {
            window.draw(*widget);
        }
        window.display();
    }
}

void Window::run(void (*loop)(void))
{
    while (window.isOpen())
    {
        while (const std::optional event = window.pollEvent())
        {
            if (event->is<sf::Event::Closed>())
                window.close();
        }
        window.clear(backgroundColor);
        loop();
        for (const auto &widget : widgets)
        {
            window.draw(*widget);
        }
        window.display();
    }
}