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
King* Player::m_getKing() const {
    return king;
}
Queen* Player::m_getQueen() const {
    return queen;
}
Rook* Player::m_getRooks() const {
    return rook;
}
Bishop* Player::m_getBishops() const {
    return bishop;
}
Knight* Player::m_getKnights() const {
    return knight;
}
Pawn* Player::m_getPawns() const {
    return pawn;
}
void Player::m_setKing(const King& king) {
    *(this->king) = king;
}
void Player::m_setQueen(const Queen& queen) {
    *(this->queen) = queen;
}
void Player::m_setRook(const Rook& rook, const suint& ind) {
    this->rook[ind] = rook;
}
void Player::m_setBishop(const Bishop& bishop, const suint& ind) {
    this->bishop[ind] = bishop;
}
void Player::m_setKnight(const Knight& knight, const suint& ind) {
    this->knight[ind] = knight;
}
void Player::m_setPawn(const Pawn& pawn, const suint& ind) {
    this->pawn[ind] = pawn;
}
