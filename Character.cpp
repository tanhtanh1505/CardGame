#include "Character.h"
#include"Game.h"

Character::Character() {

}
Character::Character(int _index, DeckOfCards& _deck) {
    index = _index;
    for(int i=0; i<10; i++) {
        Card tmp = _deck.getCard();
        tmp.setPos(xpos[index][i], ypos[index][i]);
        hand.push_back(tmp);
    }
}

void Character::printCard() {
    for(Card c : hand) {
        c.Render();
    }
}

Character::~Character() {
    
}