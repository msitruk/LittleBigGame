//
// Created by maxime on 01/09/17.
//

#include "PlayerAnimation.hh"

PlayerAnimation::PlayerAnimation() : m_texture(NULL)
{

}

void PlayerAnimation::addFrame(sf::IntRect rect)
{
    m_frames.push_back(rect);
}

void PlayerAnimation::setSpriteSheet(const sf::Texture& texture)
{
    m_texture = &texture;
}

const sf::Texture* PlayerAnimation::getSpriteSheet() const
{
    return m_texture;
}

std::size_t PlayerAnimation::getSize() const
{
    return m_frames.size();
}

const sf::IntRect& PlayerAnimation::getFrame(std::size_t n) const
{
    return m_frames[n];
}