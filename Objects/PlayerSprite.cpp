//
// Created by maxime on 26/08/17.
//

#include "PlayerSprite.hh"

//PlayerSprite::PlayerSprite(){
////    SetLife(3);
////    SetX(200);
////    SetY(100);
////    m_position = sf::Vector2(2,225);
////    m_position.x = 2;
////    m_position.y = 225;
//    if (!m_tileset.loadFromFile("../New-tileset-Mario.png"))
//    {
//        printf("Impossible de charger la texture du personnage.");
//    }
//    m_sprite.setTexture(m_tileset);
//    m_sprite.setTextureRect(sf::IntRect(1, 1, 32, 32));
//    m_sprite.setPosition(2, 225);
//}
//
////PlayerSprite::~PlayerSprite(){}
//
//void PlayerSprite::draw(sf::RenderTarget& target, sf::RenderStates states) const {
//
//    // on applique la transformation
//    states.transform *= getTransform();
//
//    // on applique la texture du tileset
//    states.texture = &m_tileset;
//
//    // et on dessine enfin le sprite
//    target.draw(m_sprite, states);
//

PlayerSprite::PlayerSprite(sf::Time frameTime, bool paused, bool looped) :
        m_animation(NULL), m_frameTime(frameTime), m_currentFrame(0), m_isPaused(paused), m_isLooped(looped), m_texture(NULL)
{

}

void PlayerSprite::setAnimation(const PlayerAnimation& animation)
{
    m_animation = &animation;
    m_texture = m_animation->getSpriteSheet();
    m_currentFrame = 0;
    setFrame(m_currentFrame);
}

void PlayerSprite::setFrameTime(sf::Time time)
{
    m_frameTime = time;
}

void PlayerSprite::play()
{
    m_isPaused = false;
}

void PlayerSprite::play(const PlayerAnimation& animation)
{
    if (getAnimation() != &animation)
        setAnimation(animation);
    play();
}

void PlayerSprite::pause()
{
    m_isPaused = true;
}

void PlayerSprite::stop()
{
    m_isPaused = true;
    m_currentFrame = 0;
    setFrame(m_currentFrame);
}

void PlayerSprite::setLooped(bool looped)
{
    m_isLooped = looped;
}

void PlayerSprite::setColor(const sf::Color& color)
{
    // Update the vertices' color
    m_vertices[0].color = color;
    m_vertices[1].color = color;
    m_vertices[2].color = color;
    m_vertices[3].color = color;
}

const PlayerAnimation* PlayerSprite::getAnimation() const
{
    return m_animation;
}

sf::FloatRect PlayerSprite::getLocalBounds() const
{
    sf::IntRect rect = m_animation->getFrame(m_currentFrame);

    float width = static_cast<float>(std::abs(rect.width));
    float height = static_cast<float>(std::abs(rect.height));

    return sf::FloatRect(0.f, 0.f, width, height);
}

sf::FloatRect PlayerSprite::getGlobalBounds() const
{
    return getTransform().transformRect(getLocalBounds());
}

bool PlayerSprite::isLooped() const
{
    return m_isLooped;
}

bool PlayerSprite::isPlaying() const
{
    return !m_isPaused;
}

sf::Time PlayerSprite::getFrameTime() const
{
    return m_frameTime;
}

void PlayerSprite::setFrame(std::size_t newFrame, bool resetTime)
{
    if (m_animation)
    {
        //calculate new vertex positions and texture coordiantes
        sf::IntRect rect = m_animation->getFrame(newFrame);

        m_vertices[0].position = sf::Vector2f(0.f, 0.f);
        m_vertices[1].position = sf::Vector2f(0.f, static_cast<float>(rect.height));
        m_vertices[2].position = sf::Vector2f(static_cast<float>(rect.width), static_cast<float>(rect.height));
        m_vertices[3].position = sf::Vector2f(static_cast<float>(rect.width), 0.f);

        float left = static_cast<float>(rect.left) + 0.0001f;
        float right = left + static_cast<float>(rect.width);
        float top = static_cast<float>(rect.top);
        float bottom = top + static_cast<float>(rect.height);

        m_vertices[0].texCoords = sf::Vector2f(left, top);
        m_vertices[1].texCoords = sf::Vector2f(left, bottom);
        m_vertices[2].texCoords = sf::Vector2f(right, bottom);
        m_vertices[3].texCoords = sf::Vector2f(right, top);
    }

    if (resetTime)
        m_currentTime = sf::Time::Zero;
}

void PlayerSprite::update(sf::Time deltaTime)
{
    // if not paused and we have a valid animation
    if (!m_isPaused && m_animation)
    {
        // add delta time
        m_currentTime += deltaTime;

        // if current time is bigger then the frame time advance one frame
        if (m_currentTime >= m_frameTime)
        {
            // reset time, but keep the remainder
            m_currentTime = sf::microseconds(m_currentTime.asMicroseconds() % m_frameTime.asMicroseconds());

            // get next Frame index
            if (m_currentFrame + 1 < m_animation->getSize())
                m_currentFrame++;
            else
            {
                // animation has ended
                m_currentFrame = 0; // reset to start

                if (!m_isLooped)
                {
                    m_isPaused = true;
                }

            }

            // set the current frame, not reseting the time
            setFrame(m_currentFrame, false);
        }
    }
}

void PlayerSprite::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
    if (m_animation && m_texture)
    {
        states.transform *= getTransform();
        states.texture = m_texture;
        target.draw(m_vertices, 4, sf::Quads, states);
    }
}
