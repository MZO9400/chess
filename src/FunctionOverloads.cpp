#include <iostream>
#include <FunctionOverloads.h>

bool operator==(const Position& _lhs, const Position& _rhs) {
    if ((_lhs.x == _rhs.x) && (_lhs.y == _rhs.y)) {
        return true;
    }
    else
        return false;
}
