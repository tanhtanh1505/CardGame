#ifndef DECKOFCARDS_H
#define DECKOFCARDS_H

#include "Card.h"
#include<vector>
//add
using namespace std;

class DeckOfCards {
public:
    const string cardGraphics[53] = 
    {
        "res/cardClubs3.png", "res/cardClubs4.png", "res/cardClubs5.png", "res/cardClubs6.png", "res/cardClubs7.png", "res/cardClubs8.png", "res/cardClubs9.png", "res/cardClubs10.png", "res/cardClubsJ.png", "cardClubsQ.png", "cardClubsK.png", "cardClubsA.png", "cardClubs2.png",
        "res/cardDiamonds3.png", "res/cardDiamonds4.png", "res/cardDiamonds5.png", "res/cardDiamonds6.png", "res/cardDiamonds7.png", "res/cardDiamonds8.png", "res/cardDiamonds9.png", "res/cardDiamonds10.png", "res/cardDiamondsJ.png", "res/cardDiamondsQ.png", "res/cardDiamondsK.png", "res/cardDiamondsA.png", "res/cardDiamonds2.png",
        "res/cardHearts3.png", "res/cardHearts4.png", "res/cardHearts5.png", "res/cardHearts6.png", "res/cardHearts7.png", "res/cardHearts8.png", "res/cardHearts9.png", "res/cardHearts10.png", "res/cardHeartsJ.png", "res/cardHeartsQ.png", "res/cardHeartsK.png", "res/cardHeartsA.png", "res/cardHearts2.png",
        "res/cardSpades3.png", "res/cardSpades4.png", "res/cardSpades5.png","res/cardSpades6.png", "res/cardSpades7.png", "res/cardSpades8.png", "res/cardSpades9.png", "res/cardSpades10.png", "res/cardSpadesJ.png", "res/cardSpadesQ.png", "res/cardSpadesK.png", "res/cardSpadesA.png", "res/cardSpades2.png",
        "res/cardBack_blue5.png"
    };

    std::vector<Card> deck;
    // Class Character ; bot, player :: Char
    // tao class nguoi choi + thao tac
    // tao class bot + thao tac

    DeckOfCards();
    // DeckOfCards(vector<Card>& _deck, vector<Card>& _bot1, vector<Card>& _bot2, vector<Card>& _bot3, vector<Card>& _player);
    void shuffle();
    Card getCard();
    // void handCard(std::vector<Character*> characters);
    ~DeckOfCards();
    // void printCard();
};
#endif // DECKOFCARD_H