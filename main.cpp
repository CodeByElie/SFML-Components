#include <SFML/Graphics.hpp>
#include <iostream>
#include "./include/sfml-components/config.hpp"
#include "./include/sfml-components/Box.hpp"
#include "./include/sfml-components/Text.hpp"
#include "./include/sfml-components/Window.hpp"

int main()
{
    Window window({.title = "App",
                   .width = 900,
                   .height = 700});
    Box box({
        .position = {100, 100},
        .width = 700,
        .height = 200,
        .borderRadius = 50,
    });
    Text text({.text = "Hello! \nSalut! \nHola! \nGuten Tag!",
               .fontSize = 24,
               .font = sf::Font{"./assets/fonts/arial/ARIALI.TTF"},
               .position = {150, 150}});

    window.add(box);
    window.add(text);
    window.run();

    return 0;
}