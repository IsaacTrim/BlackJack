#include <iostream>
#include "Deck.h"
#include "Hand.h"
using namespace std;

int main() {
    Deck testDeck;
    cout << testDeck.dealCard().getCard() << endl;
    cout << testDeck.getCount() << endl;
    cout << testDeck.dealCard().getCard() << endl;
    cout << testDeck.getCount() << endl << endl;

    Hand testHand;
    testHand += testDeck.dealCard();
    testHand += testDeck.dealCard();
    testHand += testDeck.dealCard();
    for(int j = 0; j < testHand.cardCount(); j++) {
        cout << testHand.displayCard(j).getCard() << endl;
    }
    cout << endl << testHand.getPoints() << endl;

    return 0;
}