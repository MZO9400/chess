#include <iostream>

#include "Player.h"

Player::Player() {
        rook = new Rook[2];
        bishop = new Bishop[2];
        knight = new Knight[2];
        pawn = new Pawn[8];
}
Player::Player(const ChessPieceColor& color) {
    mColor = color;
    Player();

}

Player::~Player() {
    //dtor
}
