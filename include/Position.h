#pragma once
#ifndef POSITION_H
#define POSITION_H

#include <cmath>

struct Position {
    Position(const int& x = 0, const int& y = 0) {
        this->x = x;
        this->y = y;
    }

    Position m_absPos() const {
        return Position(abs(x), abs(y));
    }

    int x;
    int y;
};
#endif // POSITION_H
