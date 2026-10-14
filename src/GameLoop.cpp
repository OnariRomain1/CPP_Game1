#include <SFML/Graphics.hpp>
#include <optional>
#include <iostream>
using namespace std;




int main(){
    sf::Clock clock;
    sf::RenderWindow window(sf::VideoMode({1920,1080}), "Game1");
    while (window.isOpen())
    {
        float deltaTime = clock.restart().asSeconds();
        while (const std::optional event = window.pollEvent())
            {
                if (
                    event->is<sf::Event::Closed>() ||
                    (
                        event->is<sf::Event::KeyPressed>() &&
                        event->getIf<sf::Event::KeyPressed>()->code ==
                            sf::Keyboard::Key::Escape
                    )
                )
                {
                    window.close();
                }
            }
            
    }
    return 0; 
}