//
// Created by maxime on 25/08/17.
//

#include "Camera.hh"

Camera::Camera(){
    m_view.setCenter(240, 400);
};

void Camera::moveCamera() {
    m_view.move(0, 100);
}