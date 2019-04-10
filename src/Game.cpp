#include <iostream>

#include "Game.h"

void Game::deployChessPieces(ChessBoard& board, Player& P1, Player& P2) {

}
void Game::showGame(const ChessBoard& board) const {
    system("cls");
    std::cout << board << std::endl;
}
