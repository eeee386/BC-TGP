cmake_minimum_required(VERSION 3.16)
project(BlackJack)

set(CMAKE_CXX_STANDARD 14)

add_executable(BlackJack main.cpp Practice/Enemy.cpp Practice/Enemy.h Practice/Boss.cpp Practice/Boss.h Practice/Creature.cpp Practice/Creature.h Practice/Orc.cpp Practice/Orc.h Practice/functions.cpp BlackJack/Card/Card.cpp BlackJack/Card/Card.h BlackJack/Deck/Deck.cpp BlackJack/Deck/Deck.h BlackJack/Player/GenericPlayer.cpp BlackJack/Player/GenericPlayer.h BlackJack/Player/Player.cpp BlackJack/Player/Player.h BlackJack/Player/House.cpp BlackJack/Player/House.h)