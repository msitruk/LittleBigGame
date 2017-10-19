//
// Created by maxime on 21/08/17.
//

#include "TileMap.hh"

TileMap::TileMap(const string level) {
    parseTmxAndFillVertexArray(level);
}

bool TileMap::load(const std::string& tileset, sf::Vector2u tileSize, unsigned int width, unsigned int height)
{
    // on charge la texture du tileset
    if (!m_tileset.loadFromFile(tileset))
        return false;

    // on redimensionne le tableau de vertex pour qu'il puisse contenir tout le niveau
    m_vertices.setPrimitiveType(sf::Quads);
    m_vertices.resize(width * height * 4);



    // on remplit le tableau de vertex, avec un quad par tuile
    for (unsigned int i = 0; i < width; ++i) {
        for (unsigned int j = 0; j < height; ++j)
            {
                // on récupère le numéro de tuile courant
                int tileNumber = m_level[i + j * width];

                // on en déduit sa position dans la texture du tileset
                int tu = tileNumber % (m_tileset.getSize().x / tileSize.x);
                int tv = tileNumber / (m_tileset.getSize().x / tileSize.x);

                // on récupère un pointeur vers le quad à définir dans le tableau de vertex
                sf::Vertex* quad = &m_vertices[(i + j * width) * 4];

                // on définit ses quatre coins
                quad[0].position = sf::Vector2f(i * tileSize.x, j * tileSize.y);
                quad[1].position = sf::Vector2f((i + 1) * tileSize.x, j * tileSize.y);
                quad[2].position = sf::Vector2f((i + 1) * tileSize.x, (j + 1) * tileSize.y);
                quad[3].position = sf::Vector2f(i * tileSize.x, (j + 1) * tileSize.y);

                //IF tileNumber is in m_solidTileIdList we push position in m_solidTilesPostions exept if position already here
                bool check = std::find(m_solidTileIdList.begin(), m_solidTileIdList.end(), tileNumber) != m_solidTileIdList.end();

                if (check){
                    this->m_solidTilesPostions.push_back(quad[0].position);
                }

                int gap = 1;
                int tNumber = tileNumber;

                // BE CAREFUL : PositionZero mean top left corner/vertex of quad

                //PositionZeroX witheout gap
                int positionZeroXnoGap = (tNumber - (75 * (tNumber / 75))) * tileSize.x;

                //PositionZeroX with gap
                int positionZeroX = positionZeroXnoGap + (positionZeroXnoGap / tileSize.x);

                //PositionZeroY no Gap
                int PositionZeroYnoGap = (tNumber / 75) * tileSize.y;

                //PositionZeroY with gap
                int PositionZeroY = PositionZeroYnoGap + (gap * (tNumber / 75));

                sf::Vector2f positionZero = sf::Vector2f(positionZeroX, PositionZeroY);

                quad[0].texCoords = positionZero;
                quad[1].texCoords = sf::Vector2f(positionZero.x + tileSize.x, positionZero.y);
                quad[2].texCoords = sf::Vector2f(positionZero.x + tileSize.x, positionZero.y + tileSize.y);
                quad[3].texCoords = sf::Vector2f(positionZero.x, positionZero.y + tileSize.y);
            }
    }
    return true;
}

void TileMap::draw(sf::RenderTarget& target, sf::RenderStates states) const {

    // on applique la transformation
    states.transform *= getTransform();

    // on applique la texture du tileset
    states.texture = &m_tileset;

    // et on dessine enfin le tableau de vertex
    target.draw(m_vertices, states);
}

void TileMap::parseTmxAndFillVertexArray(const string level){
    Tmx::Map *map = new Tmx::Map();
    map->ParseFile(level);



    // Iterate through the tile layers.
    for (int i = 0; i < map->GetNumTileLayers(); ++i)
    {
        std::vector< Tmx::Tile *> solidTiles = map->GetTileset(0)->GetTiles();

        // Get a layer.
        const Tmx::TileLayer *tileLayer = map->GetTileLayer(i);

        for (int y = 0; y < tileLayer->GetHeight(); ++y)
        {
            for (int x = 0; x < tileLayer->GetWidth(); ++x)
            {
                if (tileLayer->GetTileTilesetIndex(x, y) == -1)
                {
                    printf("........    ");
                }
                else
                {
                    this->m_level.push_back(tileLayer->GetTileId(x, y));
                    for (int i = 0; i < solidTiles.size(); i++){
                        if(solidTiles[i]->GetProperties().GetBoolProperty("solid")){
                            if (solidTiles[i]->GetId() == tileLayer->GetTileId(x, y)){
                                bool check = std::find(m_solidTileIdList.begin(), m_solidTileIdList.end(), tileLayer->GetTileId(x, y)) != m_solidTileIdList.end();
                                if (!check){
                                    m_solidTileIdList.push_back(tileLayer->GetTileId(x, y));
                                }
                            }
                        }
                    }

                }
            }
        }
    }
    delete map;
}

sf::Vector2f TileMap::GetTilePositionFromId(int id){
return sf::Vector2f();
}

