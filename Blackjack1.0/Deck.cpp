#include <vector>
#include <iostream>
#include <random>
#include <algorithm>
#include "Deck.h"

#include <ranges>

#include "Card.h"
using namespace std;

Deck::Deck() {
    //vector<Card> m_Deck;
    vector<string> suits{"Hearts", "Diamonds", "Spades", "Clubs"};
    vector<string> ranks{ "2", "3", "4", "5", "6", "7", "8", "9", "18", "Jack", "Queen", "King", "Ace"};
    vector<int> values{2,3,4,5,6,7,8,19,10,10,10,10,11};
    for(int i = 0; i < suits.size(); i++) {
        for(int j = 0; j < ranks.size(); j++) {
            m_cardDeck.push_back(Card(suits[i], ranks[j], values[j]));
        }
    }
    shuffleDeck();
    // testing the deck object
    for(auto i: m_cardDeck){
        cout << i.getCard() << endl;
    }
    cout << endl << m_cardDeck.size() << std :: endl;
}

void Deck::shuffleDeck() {
    random_device rd;
    mt19937 gen(rd());
    gen.seed(0); // testing of game
    shuffle(m_cardDeck.begin(),m_cardDeck.end(), gen);
}

Card Deck::dealCard() {
    Card temp;
    temp = m_cardDeck.back();
    m_cardDeck.pop_back();
    return temp;
}

int Deck::getCount(){
    return m_cardDeck.size();
}
