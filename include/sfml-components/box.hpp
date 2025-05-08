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
     * Set the position of the box
     * @param newPosition the new position of the box
     */
    void setPosition(const sf::Vector2f &newPosition);

    /**
     * Get the width of the box
     *
     * @return the width of the box
     */
    int getWidth() const;

    /**
     * Set the width of the box
     * @param newWidth the new width of the box
     */
    void setWidth(const int &newWidth);

    /**
     * Get the height of the box
     *
     * @return the height of the box
     */
    int getHeight() const;

    /**
     * Set the height of the box
     * @param newHeight the new height of the box
     */
    void setHeight(const int &newHeight);

private:
    sf::Vector2f position;
    int width;
    int height;
    int borderRadius;
    sf::Color fillColor;

    virtual void draw(sf::RenderTarget &target, sf::RenderStates states) const override;
};

#endif