#ifndef TEXT_HPP
#define TEXT_HPP

#include "config.hpp"
#include <SFML/Graphics.hpp>
#include <vector>
#include <string>

class Text : public sf::Drawable
{
public:
    /**
     * Constructor for Text class
     * @param parameters the parameters
     */
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

    /**
     * Set the text
     * @param newText the new text 
     */
    void setText(const std::string &newText);

private:
    sf::Vector2f position;
    sf::Color color;
    std::string text;
    sf::Font font;
    int fontSize;

    virtual void draw(sf::RenderTarget &target, sf::RenderStates states) const override;
};

#endif