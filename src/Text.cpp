#include "../include/sfml-components/Text.hpp"
#include <SFML/Graphics.hpp>

Text::Text(const PARAMETERS &parameters) : position{parameters.position}, color{parameters.color}, text{parameters.text}, font{parameters.font}, fontSize{parameters.fontSize}
{
}

void Text::draw(sf::RenderTarget &target, sf::RenderStates states) const
{
    sf::Text textSF(font);
    textSF.setPosition(position);
    textSF.setString(text);
    textSF.setCharacterSize(fontSize);
    textSF.setFillColor(color);
    target.draw(textSF, states);
}