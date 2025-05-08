#ifndef CONFIG_HPP
#define CONFIG_HPP

#include <SFML/Graphics.hpp>
#include <vector>
#include <string>

const sf::Color backgroundColor(255, 205, 178);
const sf::Color primaryColor(255, 180, 162);
const sf::Color secondaryColor(229, 152, 155);
const sf::Color textColor(181, 130, 140);

struct PARAMETERS
{
    sf::Vector2f position;
    unsigned int width;
    unsigned int height;
    int borderRadius;
    sf::Color fillColor = primaryColor;
    sf::Color color = textColor;
    sf::Font font;
    int fontSize = 24;
    std::string text;
    std::string title;
};

#endif