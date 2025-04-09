cmake_minimum_required(VERSION 3.30)
project(Blackjack1_0)

set(CMAKE_CXX_STANDARD 20)

add_executable(Blackjack1_0 main.cpp
        Deck.cpp
        Deck.h
        Card.cpp
        Card.h
        Hand.cpp
        Hand.h)
