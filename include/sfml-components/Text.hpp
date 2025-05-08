#ifndef TEXT_HPP
#define TEXT_HPP

#include "config.hpp"
#include <SFML/Graphics.hpp>
#include <vector>

class Text : public sf::Drawable
{
public:
    Text(const PARAMETERS &parameters);

    /**
     * Get the position of the text
     *
     * @return the position of the text
     */
    sf::Vector2f getPosition() const;

    /**
     * Set the position of the text
     * @param newPosition the new position of the text
     */
    void setPosition(const sf::Vector2f &newPosition);

    /**
     * Get the width of the text
     *
     * @return the width of the text
     */
    int getWidth() const;

    /**
     * Get the height of the text
     *
     * @return the height of the text
     */
    int getHeight() const;


private:
    sf::Vector2f position;
    int width;
    int height;
    int borderRadius;
    sf::Color fillColor;

    virtual void draw(sf::RenderTarget &target, sf::RenderStates states) const override;
};

#endif