#include "../include/sfml-components/Text.hpp"
#include <SFML/Graphics.hpp>

Text::Text(const PARAMETERS &parameters) : position{parameters.position}, color{parameters.color}, text{parameters.text}
{
}