cmake_minimum_required(VERSION 3.16)
project(GameLobby)

set(CMAKE_CXX_STANDARD 14)

add_executable(GameLobby main.cpp Farm.cpp Critter.cpp heap.cpp Player.cpp Player.h Lobby.cpp Lobby.h)