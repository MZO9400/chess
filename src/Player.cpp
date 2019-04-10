#include <iostream>

#include "Player.h"

Player::Player() {
        mColor = ChessPieceColor::None;
        king = new King;
        queen = new Queen;
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
void Player::m_setPieceColor() {
    if (mColor != ChessPieceColor::None) {
        king->m_setColor(mColor);
        queen->m_setColor(mColor);

        for (int i = 0; i < 2; i++) {
            rook[i].m_setColor(mColor);
            bishop[i].m_setColor(mColor);
            knight[i].m_setColor(mColor);
        }

        for (int i = 0; i < 8; i++) {
            pawn[i].m_setColor(mColor);
        }
    }
}
