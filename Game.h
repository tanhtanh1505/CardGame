#pragma once
#ifndef GAME_H
#define GAME_H

#include <SDL.h>
#include<SDL_image.h>
#include <iostream>
#include"DeckOfCards.h"

class Game {
public:
    Game();
    ~Game();
    
    void init(const char* title, int x, int y, int w, int h, bool fullscreen);
    
    void handleEvents(SDL_Event event);
    void update();
    void render();
    void clean();
    bool running() {return isRunning; };
    static SDL_Renderer *renderer;
private:
    bool isRunning;
    SDL_Window *window;
    // add class Character
    // Deck -> bo bai
    // std::vector<Character*> characters; -> THuy ba linh
    // characters.push_back(new Bot())
    // characters.push_back(new Bot())
    // characters.push_back(new Player())

    // std::vector<Card*> bot1;
    // std::vector<Card*> bot2;
    // std::vector<Card*> bot3;
    // std::vector<Card*> player;
};

#endif // GAME_H