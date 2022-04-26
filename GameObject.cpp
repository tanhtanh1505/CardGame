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
bool GameObject::isClicked(SDL_Event event)
{
    if (event.type == SDL_MOUSEMOTION) {
        int x_m = event.motion.x;
        int y_m = event.motion.y;
        if (x_m > getRect().x && x_m < getRect().x + getRect().w
            && y_m > getRect().y && y_m < getRect().y + getRect().h)
        {
            inSide = true;
        }
        else
        {
            inSide = false;
            return false;
        }
    }
    if (event.type == SDL_MOUSEBUTTONDOWN && inSide) {
        cout << "clicked" << endl;
        return true;
    }
    return false;
}
GameObject::~GameObject() {

}
