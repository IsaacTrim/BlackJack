#include <iostream>
#include "Deck.h"
using namespace std;

int main() {
    Deck testDeck;
    std :: cout << testDeck.dealCard().getCard() << endl;
    std :: cout << testDeck.getCount() << endl;
    std :: cout << testDeck.dealCard().getCard() << endl;
    std :: cout << testDeck.getCount() << endl;
    return 0;
}