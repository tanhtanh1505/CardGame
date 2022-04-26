#include "GameObject.h"
#include "TextureManager.h"

GameObject::GameObject() {
    x = 0;
    y = 0;

    srcRect.x = 0;
    srcRect.y = 0;
    srcRect.w = 150;
    srcRect.h = 200;

    destRect.x = x;
    destRect.y = y;
    destRect.w = srcRect.w;
    destRect.h = srcRect.h;
}
GameObject::GameObject(std::string texturesheet, int _x, int _y) : GameObject(){
    objTexture = TextureManager::LoadTexture(texturesheet.c_str());
    x = _x;
    y = _y;
}

void GameObject::Update() {
    
}

void GameObject::Render() {
    SDL_RenderCopy(Game::renderer, objTexture, &srcRect, &destRect);
    //SDL_RenderCopyEx(Game::renderer, objTexture, &srcRect, &destRect, 90, NULL, SDL_FLIP_NONE);
}
GameObject::~GameObject() {

}
