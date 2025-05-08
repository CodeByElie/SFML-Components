#include "../include/sfml-components/Box.hpp"
#include <SFML/Graphics.hpp>

Box::Box(const PARAMETERS &parameters) : position{parameters.position}, width{parameters.width}, height{parameters.height}, borderRadius{parameters.borderRadius}, fillColor{parameters.fillColor}
{
    if (width <= 0)
        throw std::invalid_argument("Box constructor error: 'width' must be strictly positive (got " + std::to_string(width) + ")");

    if (height <= 0)
        throw std::invalid_argument("Box constructor error: 'height' must be strictly positive (got " + std::to_string(height) + ")");

    if (borderRadius < 0)
        throw std::invalid_argument("Box constructor error: 'borderRadius' must be non-negative (got " + std::to_string(borderRadius) + ")");
}

void Box::draw(sf::RenderTarget &target, sf::RenderStates states) const
{
    sf::RectangleShape rectangle(sf::Vector2f(width - borderRadius * 2, height));
    rectangle.setFillColor(fillColor);
    rectangle.setPosition(sf::Vector2f(position.x + borderRadius, position.y));
    target.draw(rectangle, states);
    rectangle.setSize(sf::Vector2f(width, height - borderRadius * 2));
    rectangle.setPosition(sf::Vector2f(position.x, position.y + borderRadius));
    target.draw(rectangle, states);

    sf::CircleShape circle(borderRadius);
    circle.setPointCount(borderRadius * 5);
    circle.setFillColor(fillColor);
    for (auto coords : std::vector<sf::Vector2f>{sf::Vector2f(position.x, position.y), sf::Vector2f(position.x + width - borderRadius * 2, position.y), sf::Vector2f(position.x, position.y + height - borderRadius * 2), sf::Vector2f(position.x + width - borderRadius * 2, position.y + height - borderRadius * 2)})
    {
        circle.setPosition(coords);
        target.draw(circle, states);
    }
}

sf::Vector2f Box::getPosition() const { return position; }
void Box::setPosition(const sf::Vector2f &newPosition) { position = newPosition; }

int Box::getWidth() const { return width; }
void Box::setWidth(const int &newWidth) { width = newWidth; }

int Box::getHeight() const { return height; }
void Box::setHeight(const int &newHeight) { height = newHeight; }
