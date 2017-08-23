//
// Created by maxime on 21/08/17.
//

#include "TileMap.hh"

TileMap::TileMap(){};
//Map::~Map(){};

//}

TileMap::TileMap(const string level) {
//
//    //Preparation de sprites
//    sf::Sprite sprite;
//    sf::Sprite sprite2;
//    sprite.setTexture(texture);
//    sprite2.setTexture(texture);
//    sprite.setTextureRect(sf::IntRect(0, 0, 16, 16));
//    sprite2.setTextureRect(sf::IntRect(16, 0, 16, 16));
//    sprite2.setPosition(sf::Vector2f(16, 0));
//    window.draw(sprite);
//    window.draw(sprite2);
//
    parseTmxAndFillVertexArray(level);
    for (int i = 0; i < m_level.size(); i++){
        printf("wtf %d\n", m_level[i]);
    }
}

//bool TileMap::load(const std::string& tileset, sf::Vector2u tileSize, const int* tiles, unsigned int width, unsigned int height)
bool TileMap::load(const std::string& tileset, sf::Vector2u tileSize, unsigned int width, unsigned int height)
{
    // on charge la texture du tileset
    if (!m_tileset.loadFromFile(tileset))
        return false;

    // on redimensionne le tableau de vertex pour qu'il puisse contenir tout le niveau
    m_vertices.setPrimitiveType(sf::Quads);
    m_vertices.resize(width * height * 4);

    // on remplit le tableau de vertex, avec un quad par tuile
    for (unsigned int i = 0; i < width; ++i)
        for (unsigned int j = 0; j < height; ++j)
        {
            // on récupère le numéro de tuile courant
//            int tileNumber = tiles[i + j * width];
            int tileNumber = m_level[i + j * width];
//            int tileNumber = m_level[j*i*width];

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

            // on définit ses quatre coordonnées de texture
            quad[0].texCoords = sf::Vector2f(tu * tileSize.x, tv * tileSize.y);
            quad[1].texCoords = sf::Vector2f((tu + 1) * tileSize.x, tv * tileSize.y);
            quad[2].texCoords = sf::Vector2f((tu + 1) * tileSize.x, (tv + 1) * tileSize.y);
            quad[3].texCoords = sf::Vector2f(tu * tileSize.x, (tv + 1) * tileSize.y);

//            float pixelGap = 1.f;
//            float tileWidth = 16.f;
//            float tileHeight = 16.f;
//
//
////            void makeTile(int posX, int posY) //position of tile in tile set, eg (4, 7)

//            position[0] = {(posX * pixelGap) + (posX * tileWidth), (posY * pixelGap) + (posY * tileHeight)};
//            position[1] = {position[0].x + tileWidth, position[0].y};
//            position[2] = {position[0].x + tileWidth, position[0].y + tileHeight};
//            position[3] = {position[0].x, position[2].y};
//
//            quad[0] = sf::Vector2f((tu * pixelGap) + (tu * tileWidth), (tv * pixelGap) + (tv * tileHeight));
//            quad[1] = sf::Vector2f(quad[0].position.x + tileWidth, quad[0].position.y);
//            quad[2] = sf::Vector2f(quad[0].position.x + tileWidth, quad[0].position.y + tileHeight);
//            quad[3] = sf::Vector2f(quad[0].position.x, quad[2].position.y);
//
//            quad[0].texCoords = sf::Vector2f((tu * tileSize.x) - pixelGap, (tv * tileSize.y) - pixelGap);
//            quad[1].texCoords = sf::Vector2f(((tu + 1) * tileSize.x) - pixelGap, (tv * tileSize.y) - pixelGap);
//            quad[2].texCoords = sf::Vector2f(((tu + 1) * tileSize.x) - pixelGap, ((tv + 1) * tileSize.y) - pixelGap);
//            quad[3].texCoords = sf::Vector2f((tu * tileSize.x) - pixelGap, ((tv + 1) * tileSize.y) - pixelGap);

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
//    std::string fileName = (argc > 1) ? argv[1] : "./example/example.tmx";
    map->ParseFile(level);

    if (map->HasError()) {
        printf("error code: %d\n", map->GetErrorCode());
        printf("error text: %s\n", map->GetErrorText().c_str());
    }
    printf("====================================\n");
    printf("TileMap\n");
    printf("====================================\n");

    printf("Version: %1.1f\n", map->GetVersion());
    printf("Orientation: %d\n", map->GetOrientation());
    if (!map->GetBackgroundColor().empty())
        printf("Background Color (hex): %s\n",
               map->GetBackgroundColor().c_str());
    printf("Render Order: %d\n", map->GetRenderOrder());
    if (map->GetStaggerAxis())
        printf("Stagger Axis: %d\n", map->GetStaggerAxis());
    if (map->GetStaggerIndex())
        printf("Stagger Index: %d\n", map->GetStaggerIndex());
    printf("Width: %d\n", map->GetWidth());
    printf("Height: %d\n", map->GetHeight());
    printf("Tile Width: %d\n", map->GetTileWidth());
    printf("Tile Height: %d\n", map->GetTileHeight());

    for (int i = 0; i < map->GetNumTilesets(); ++i)
    {
        printf("                                    \n");
        printf("====================================\n");
        printf("Tileset : %02d\n", i);
        printf("====================================\n");

        // Get a tileset.
        const Tmx::Tileset *tileset = map->GetTileset(i);

        // Print tileset information.
        printf("Name: %s\n", tileset->GetName().c_str());
        printf("Margin: %d\n", tileset->GetMargin());
        printf("Spacing: %d\n", tileset->GetSpacing());
        printf("First gid: %d\n", tileset->GetFirstGid());
        printf("Image Width: %d\n", tileset->GetImage()->GetWidth());
        printf("Image Height: %d\n", tileset->GetImage()->GetHeight());
        printf("Image Source: %s\n", tileset->GetImage()->GetSource().c_str());
        if (!tileset->GetImage()->GetTransparentColor().empty())
            printf("Transparent Color (hex): %s\n",
                   tileset->GetImage()->GetTransparentColor().c_str());

        if (tileset->GetTiles().size() > 0)
        {
            // Get a tile from the tileset.
            const Tmx::Tile *tile = *(tileset->GetTiles().begin());

            // Print the properties of a tile.
            std::map<std::string, std::string> list =
                    tile->GetProperties().GetList();
            std::map<std::string, std::string>::iterator iter;
            for (iter = list.begin(); iter != list.end(); ++iter)
            {
                printf("%s = %s\n", iter->first.c_str(), iter->second.c_str());
            }

            if (tile->IsAnimated())
            {
                printf(
                        "Tile is animated: %d frames with total duration of %dms.\n",
                        tile->GetFrameCount(), tile->GetTotalDuration());

                const std::vector<Tmx::AnimationFrame> &frames =
                        tile->GetFrames();

                int i = 0;
                for (std::vector<Tmx::AnimationFrame>::const_iterator it =
                        frames.begin(); it != frames.end(); it++, i++)
                {
                    printf("\tFrame %d: Tile ID = %d, Duration = %dms\n", i,
                           it->GetTileID(), it->GetDuration());
                }
            }

            if(tile->HasObjects())
            {
                printf(
                        "Tile has objects.\n");


                // Iterate through all Collision objects in the tile.
                for (int j = 0; j < tile->GetNumObjects(); ++j)
                {
                    // Get an object.
                    const Tmx::Object *object = tile->GetObject(j);

                    // Print information about the object.
                    printf("Object Name: %s\n", object->GetName().c_str());
                    printf("Object Position: (%03d, %03d)\n", object->GetX(),
                           object->GetY());
                    printf("Object Size: (%03d, %03d)\n", object->GetWidth(),
                           object->GetHeight());

                    // Print Polygon points.
                    const Tmx::Polygon *polygon = object->GetPolygon();
                    if (polygon != 0)
                    {
                        for (int i = 0; i < polygon->GetNumPoints(); i++)
                        {
                            const Tmx::Point &point = polygon->GetPoint(i);
                            printf("Object Polygon: Point %d: (%f, %f)\n", i, point.x,
                                   point.y);
                        }
                    }

                    // Print Polyline points.
                    const Tmx::Polyline *polyline = object->GetPolyline();
                    if (polyline != 0)
                    {
                        for (int i = 0; i < polyline->GetNumPoints(); i++)
                        {
                            const Tmx::Point &point = polyline->GetPoint(i);
                            printf("Object Polyline: Point %d: (%f, %f)\n", i, point.x,
                                   point.y);
                        }
                    }
                }

            }
        }
    }

    // Iterate through the tile layers.
    for (int i = 0; i < map->GetNumTileLayers(); ++i)
    {
        printf("                                    \n");
        printf("====================================\n");
        printf("Layer : %02d/%s \n", i, map->GetTileLayer(i)->GetName().c_str());
        printf("====================================\n");

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
//                    this->m_level.push_back(tileLayer->GetTileGid(x, y));
//                    this->m_level.push_back(4);
                    // Get the tile's id and gid.
                    printf("%03d(%03d)", tileLayer->GetTileId(x, y), tileLayer->GetTileGid(x, y));

                    // Find a tileset for that id.
                    //const Tmx::Tileset *tileset = map->FindTileset(layer->GetTileId(x, y));
                    if (tileLayer->IsTileFlippedHorizontally(x, y))
                    {
                        printf("h");
                    }
                    else
                    {
                        printf(" ");
                    }
                    if (tileLayer->IsTileFlippedVertically(x, y))
                    {
                        printf("v");
                    }
                    else
                    {
                        printf(" ");
                    }
                    if (tileLayer->IsTileFlippedDiagonally(x, y))
                    {
                        printf("d ");
                    }
                    else
                    {
                        printf("  ");
                    }
                }
            }

            printf("\n");
        }
    }


    delete map;
    printf("error code: Fin de parseTmxAndFillVertexArray\n");
}

