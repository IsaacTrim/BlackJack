//
// Created by administrator on 4/15/25.
//

#include "Game.h"

using namespace std;

//1
// player gets a card
// dealer gets a card
// player gets a card
// display
// dealer gets a card
//2
// hit or stand
// bust?
//3
// dealer gets a card
// bust?
//4
// repeat till find win
Game :: Game(){

}
Hand Game::getPlayerHand(Deck &deck, Hand &hand){
  hand += deck.dealCard();
  hand += deck.dealCard();
  return hand;
}
Hand Game::getDealerHand(Deck &deck, Hand &hand){
  hand += deck.dealCard();
  hand += deck.dealCard();
  return hand;
}
void Game::displayCards(Hand hand, string pd){ //pd = player or dealer
  if(pd == "Dealer"){
    cout << "Dealer's cards":() << endl;
  }
  else{cout << pd << "'s Cards:" << endl;
  }
}
void displayRound(){}
void playGame(){}