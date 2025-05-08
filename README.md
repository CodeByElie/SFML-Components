# SFML Components Library

This project aims to create a comprehensive library of reusable components for **SFML (Simple and Fast Multimedia Library)**. The goal is to provide developers with a collection of pre-built, modular, and easy-to-use components to accelerate the development of SFML-based applications and games.

## Features (Planned)

- A variety of graphical and utility components.
- Modular and extensible design.
- Easy integration with existing SFML projects.
- Well-documented examples and usage guides.

## Examples

Without SFML-Components :

```
    center.setSize(sf::Vector2f(width - radius * 2, height));
    center.setPosition(sf::Vector2f(x + radius, y));
    center.setFillColor(color);

    left.setSize(sf::Vector2f(width, height - radius * 2));
    left.setPosition(sf::Vector2f(x, y + radius));
    left.setFillColor(color);

    corners = std::vector<sf::CircleShape>(4, sf::CircleShape(radius));
    corners[0].setPosition(sf::Vector2f(x, y));
    corners[1].setPosition(sf::Vector2f(x + width - radius * 2, y));
    corners[2].setPosition(sf::Vector2f(x, y + height - radius * 2));
    corners[3].setPosition(sf::Vector2f(x + width - radius * 2, y + height - radius * 2));
    for (auto &c : corners)
    {
        c.setFillColor(color);
        c.setPointCount(30);
    }
```

With SFML-Components :

```
Box box({
    .position = {x,y},
    .width = width,
    .height = height,
    .fillColor = color,
    .borerRadius = radius
})
```

Stay tuned for updates as the library evolves!
