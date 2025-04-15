//
// Created by administrator on 4/15/25.
//

#ifndef GAME_H
#define GAME_H
#include "Hand.h"


class Game {
 Deck m_deck;
 Hand m_dealerHand;
 Hand m_playerHand;
 public:
 Game();
 Hand getPlayerHand(Deck, Hand);
 Hand getDealerHand(Deck, Hand);
 void displayCards(Hand, string);
 void displayRound();
 void playGame();
};



#endif //GAME_H
