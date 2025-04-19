#ifndef GAME_H
#define GAME_H
#include "Hand.h"
#include <iostream>
#include "Deck.h"
class Game{
 Deck m_deck;
 Hand m_dealerHand;
 Hand m_playerHand;
 public:
 Game();
 Hand getPlayerHand(Deck&deck, Hand &hand);
 Hand getDealerHand(Deck &deck, Hand &hand);
 void displayCards(Hand hand, string pd);
 void displayRound();
 void playGame();
};



#endif //GAME_H
