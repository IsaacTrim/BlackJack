#ifndef CARD_H
#define CARD_H
#include <string>
using namespace std;

class Card {
    string m_rank;
    string m_suit;
    int m_value;
    public:
    Card();
    Card(string suit, string rank, int value);
    string getRank();
    int getValue();
    string getCard();

};

#endif //CARD_H