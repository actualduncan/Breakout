#pragma once
#include <SFML/Graphics.hpp>

class Brick {
public:
    Brick(float x, float y, float width, float height, const sf::Texture* texture);
    void render(sf::RenderWindow& window);
    sf::FloatRect getBounds() const;

private:
    sf::RectangleShape _shape;
    bool _isDestroyed;
};