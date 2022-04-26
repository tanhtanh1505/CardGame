#pragma once
#ifndef CHARACTER_H
#define CHARACTER_H
#include "GameObject.h"
#include "Card.h"
#include<vector>
#include "DeckOfCards.h"
using namespace std;

class Character : public GameObject{
private:
int xpos[4][10] = {
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {100, 150, 200, 250, 300, 350, 400, 450, 500, 550},
    {900, 900, 900, 900, 900, 900, 900, 900, 900, 900},
    {100, 150, 200, 250, 300, 350, 400, 450, 500, 550}
};

int ypos[4][10] = {
    {50, 90, 130, 170, 210, 250, 290, 330, 370, 410},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {50, 70, 90, 110, 130, 150, 170, 190, 210, 230},
    {500, 500, 500, 500, 500, 500, 500, 500, 500, 500}
};
public:
    // std::vector<Card*> hand;
    vector<Card> hand;
    int index; // 0->bot1 1->bot2 2->bot3 3->player
    // 
    // Moi character co 1 set card
    Character();
    Character(int _index, DeckOfCards& _deck);
    void printCard();
    ~Character();

};
#endif