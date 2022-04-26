#include "DeckOfCards.h"
#include "Game.h"
#include "Character.h"

Game* game = nullptr;
SDL_Renderer* Game::renderer = nullptr;
SDL_Event event;
// Card b1, b2, b3, p;
int main(int argc, char* argv[]) {
    string s = "123";

    game = new Game();
    game->init("BIG TWO GAME", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 960, 640, false);
    
    DeckOfCards deckOfCard;
    deckOfCard.shuffle();
    Character player1(0, deckOfCard);
    Character player2(1, deckOfCard);
    Character player3(2, deckOfCard);
    Character player4(3, deckOfCard);
    Card c("res/sky.jpg");
    while (game->running()) {
        game->handleEvents(event);
        player1.printCard();
        player2.printCard();
        player3.printCard();
        player4.printCard();
        
        /*c.Render();*/
        SDL_RenderPresent(Game::renderer);
        // game->update();
        // game->render(d);
    }

    game->clean();

    return 0;
}
