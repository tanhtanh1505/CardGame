#include "DeckOfCards.h"
#include <time.h>

using namespace std;

#define DECK_SIZE 53

DeckOfCards::DeckOfCards() {
    for(int i = 0; i < DECK_SIZE-1; i++) {
        Card t(cardGraphics[i]);
        deck.push_back(t);
    }
}

// DeckOfCards::DeckOfCards(vector<Card>& _deck, vector<Card>& _bot1, vector<Card>& _bot2, vector<Card>& _bot3, vector<Card>& _player) {
//     deck = _deck;
//     bot1 = _bot1;
//     bot2 = _bot2;
//     bot3 = _bot3;
//     player = _player;
// }
void DeckOfCards::shuffle() {
    srand(time(NULL));
    for (int i = 0; i < DECK_SIZE-1; i++) {
        int random = rand() % (DECK_SIZE - i - 1) + i;
        Card tmp = deck[i];
        deck[i] = deck[random];
        deck[random] = tmp;
    }
}


Card DeckOfCards::getCard(){
    cout << deck.size() << endl;
    Card tmp = deck.back();
    deck.pop_back();
    return tmp;
}
// void DeckOfCards::handCard(std::vector<Character*> characters) {
//     shuffle();
//     std::vector<Card*> handOfBot;
    
//     // for(int i=0; i<10; i++) {
//     //     characters[i].hand.push_back(deck[i]);
//     // }
    
    
// }

// void DeckOfCards::handCard() {
//     for(int i=0; i<10; i++) {
//         // cout << deck[i].value << endl;
//         bot1.push_back(deck[i]);
//         // bot1.push_back(Card(xpos[0][i], ypos[0][i], deck[i].value));
//         // // bot1[i].path = "res/cardBack_blue5.png";
//         bot1[i].Init(cardGraphics[deck[i].value].data(),xpos[0][i], ypos[0][i]);
//         bot1[i].Update();

//         // cout << bot1[i].value << endl;
        
//     }
    
//     for(int i=10; i<20; i++) {
//         bot2.push_back(deck[i]);
//         // bot2.push_back(Card(xpos[1][i-10], ypos[1][i-10], deck[i].value));
//         // bot2[i-10].path = "res/cardBack_blue5.png";
//         bot2[i].Init(cardGraphics[i].data(),xpos[1][i-10], ypos[1][i-10]);
//         bot2[i].Update();
//     }
//     for(int i=20; i<30; i++) {
//         bot3.push_back(deck[i]);
//         // bot3[i-20] = Card(xpos[2][i-20], ypos[2][i-20], deck[i].value);
//         // bot3[i-20].path = "res/cardBack_blue5.png";
//         bot3[i-30].Init(cardGraphics[i].data(), xpos[2][i-20], ypos[2][i-20]);
//         bot3[i].Update();
//     }

//     for(int i=30; i<40; i++) {
//         player.push_back(deck[i]);
//         player[i-30].Init(cardGraphics[i].data(), xpos[3][i-30], ypos[3][i-30]);
//         bot3[i].Update();
//         //cout << player[0].value;
//         //hereee
//         // player[i-30].path = "res/cardBack_blue5.png";
//     }

// }

// Need to fix

// void DeckOfCards::printCard() {
//     //  for(int i=0; i<10; i++) {
//     //     bot1[i].GameObject::Render();
//     //     // bot2[i].GameObject::Render();
//     //     // bot3[i].GameObject::Render();
//     //     // player[i].GameObject::Render();
//     //  }
// }

DeckOfCards::~DeckOfCards() {

}


