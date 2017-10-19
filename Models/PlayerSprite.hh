//
// Created by maxime on 26/08/17.
//

#ifndef LITTLEBIGGAME_PLAYER_HH
#define LITTLEBIGGAME_PLAYER_HH


//#include <SFML/Graphics/Drawable.hpp>
//#include <SFML/Graphics/Transformable.hpp>
//#include <SFML/Graphics/Texture.hpp>
#include <SFML/Graphics/RenderTarget.hpp>
#include <SFML/System/Time.hpp>
#include <SFML/Graphics/Drawable.hpp>
#include <SFML/Graphics/Transformable.hpp>
#include <SFML/System/Vector2.hpp>
//#include "Character.hh"
#include "PlayerAnimation.hh""

//class PlayerSprite : public Character, public sf::Drawable, public sf::Transformable {
class PlayerSprite : public sf::Drawable, public sf::Transformable {

public:
//    PlayerSprite();
//    virtual ~PlayerSprite() = 0;

    explicit PlayerSprite(sf::Time frameTime = sf::seconds(0.2f), bool paused = false, bool looped = true);
    void update(sf::Time deltaTime);
    void setAnimation(const PlayerAnimation& animation);
    void setFrameTime(sf::Time time);
    void play();
    void play(const PlayerAnimation& animation);
    void pause();
    void stop();
    void setLooped(bool looped);
    void setColor(const sf::Color& color);
    const PlayerAnimation* getAnimation() const;
    sf::FloatRect getLocalBounds() const;
    sf::FloatRect getGlobalBounds() const;
    bool isLooped() const;
    bool isPlaying() const;
    sf::Time getFrameTime() const;
    void setFrame(std::size_t newFrame, bool resetTime = true);

private:
//    sf::Sprite m_sprite;
//    sf::Texture m_tileset;

    const PlayerAnimation* m_animation;
    sf::Time m_frameTime;
    sf::Time m_currentTime;
    std::size_t m_currentFrame;
    bool m_isPaused;
    bool m_isLooped;
    const sf::Texture* m_texture;
    sf::Vertex m_vertices[4];

    virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;

};


#endif //LITTLEBIGGAME_PLAYER_HH
