//
// Created by maxime on 21/08/17.
//

#ifndef LITTLEBIGGAME_MAP_HH
#define LITTLEBIGGAME_MAP_HH

#include "AbstractEntity.hh"
#include <cstdlib>
#include <iostream>
#include <SFML/Graphics.hpp>
#include "tmxparser/Tmx.h"
#include <vector>

using namespace std;
using namespace sf;

class TileMap : public AbstractEntity, public sf::Drawable, public sf::Transformable {
public:
    TileMap();
    TileMap(const string level);
//    bool load(const std::string& tileset, sf::Vector2u tileSize, const int* tiles, unsigned int width, unsigned int height);
    bool load(const std::string& tileset, sf::Vector2u tileSize, unsigned int width, unsigned int height);

private:
    vector<int> m_level;
    sf::VertexArray m_vertices;
    sf::Texture m_tileset;
    virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;
    void parseTmxAndFillVertexArray(const string level);

};




#endif //LITTLEBIGGAME_MAP_HH
