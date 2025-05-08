#ifndef WINDOW_HPP
#define WINDOW_HPP

#include "config.hpp"
#include <SFML/Graphics.hpp>
#include <vector>

class Window
{
public:
    /**
     * Constructor for Window class
     * @param parameters the parameters
     */
    Window(const PARAMETERS &parameters);

    void add(const sf::Drawable &widget);

    void run();

private:
    sf::RenderWindow window;
    std::vector<const sf::Drawable *> widgets;
};

#endif
