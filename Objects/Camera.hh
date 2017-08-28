//
// Created by maxime on 25/08/17.
//

#ifndef LITTLEBIGGAME_CAMERA_HH
#define LITTLEBIGGAME_CAMERA_HH


#include <SFML/Graphics/View.hpp>

class Camera {
public:
    Camera();
    void moveCamera();

private:
    sf::View m_view;
};


#endif //LITTLEBIGGAME_CAMERA_HH
