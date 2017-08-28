//
// Created by maxime on 26/08/17.
//

#ifndef LITTLEBIGGAME_PLAYER_HH
#define LITTLEBIGGAME_PLAYER_HH


//#include <SFML/Graphics/Drawable.hpp>
//#include <SFML/Graphics/Transformable.hpp>
//#include <SFML/Graphics/Texture.hpp>
#include <SFML/Graphics.hpp>
#include "Character.hh"

//class Player : public Character, public sf::Drawable, public sf::Transformable {
class Player : public sf::Drawable, public sf::Transformable {

public:
    Player();
//    virtual ~Player() = 0;

private:
    sf::Texture m_tileset;
    sf::Sprite m_sprite;
    virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;


};


#endif //LITTLEBIGGAME_PLAYER_HH
