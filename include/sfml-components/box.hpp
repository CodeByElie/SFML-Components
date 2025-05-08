#ifndef BOX_HPP
#define BOX_HPP

#include "config.hpp"
#include <SFML/Graphics.hpp>
#include <vector>

class Box : public sf::Drawable
{
public:
    Box(const PARAMETERS &parameters);

    /**
     * Get the position of the box
     *
     * @return the position of the box
     */
    sf::Vector2f getPosition() const;

    /**
     * Get the width of the box
     *
     * @return the width of the box
     */
    int getWidth() const;

    /**
     * Get the height of the box
     *
     * @return the height of the box
     */
    int getHeight() const;

private:
    sf::Vector2f position;
    int width;
    int height;
    int borderRadius;
    int padding;
    sf::Color fillColor;
    std::vector<sf::Drawable> children;

    virtual void draw(sf::RenderTarget &target, sf::RenderStates states) const override;
};

#endif