#pragma once
#ifndef GAMEOBJIECT_H
#define GAMEOBJIECT_H
#include <SDL.h>
#include <SDL_image.h>
#include <string>

using namespace std;

class GameObject {
public:
    GameObject();
    GameObject(std::string texturesheet, int _x, int _y);
    // void Init(std::string texturesheet, int x, int y);
    // void SetPos(int x, int y);
    // void SetObjTexture();
    void Update();
    void Render();
    void setPos(int _x, int _y){
        x = _x;
        y = _y;
        destRect.x = x;
        destRect.y = y;
    }
    int x;
    int y;
    ~GameObject();

    
protected:
    SDL_Texture* objTexture;
    SDL_Rect rect;
    SDL_Rect srcRect, destRect;
    
};

#endif //GAMEOBJIECT_H