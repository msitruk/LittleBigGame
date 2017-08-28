//
// Created by maxime on 26/08/17.
//

#include "Player.hh"

Player::Player(){
//    SetLife(3);
//    SetX(200);
//    SetY(100);
    if (!m_tileset.loadFromFile("../perso-mario.png"))
    {
        printf("Impossible de charger la texture du personnage.");
    }
    m_sprite.setTexture(m_tileset);
    m_sprite.setTextureRect(sf::IntRect(10, 10, 20, 20));
    m_sprite.setPosition(10, 230);

}

//Player::~Player(){}

void Player::draw(sf::RenderTarget& target, sf::RenderStates states) const {

    // on applique la transformation
    states.transform *= getTransform();

    // on applique la texture du tileset
    states.texture = &m_tileset;

    // et on dessine enfin le sprite
    target.draw(m_sprite, states);
}