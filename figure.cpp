#include "figure.h"

Figure::Figure(int _price,
               const std::string _name,
               bool _white) {
    price = _price;
    name = _name;
    white = _white;
}

int Figure::getPrice() {
    return price;
}

bool Figure::isWhite() {
    return white;
}

const std::string Figure::getName() {
    return name;
}

Pawn::Pawn(bool _isWhite): Figure(1, "pawn", _isWhite) {}
Rook::Rook(bool _isWhite): Figure(5, "Rook", _isWhite) {}
Knight::Knight(bool _isWhite): Figure(3, "Knight", _isWhite) {}
Bishop::Bishop(bool _isWhite): Figure(3, "Bishop", _isWhite) {}
Queen::Queen(bool _isWhite): Figure(8, "Queen", _isWhite) {}
King::King(bool _isWhite): Figure(10, "King", _isWhite) {}

bool Pawn::canMove(char rowFrom, char laneFrom,
                   char rowTo, char laneTo) {
    if (laneTo != laneFrom) {
        return false;
    } else if (isWhite()) {
        if (rowTo - rowFrom == 1) {
            return true;
        }
        if ((rowFrom == '2') && (rowTo - rowFrom == 2)) {
            return true;
        }
    } else {
        if (rowFrom - rowTo == 1) {
            return true;
        }
        if ((rowFrom == '7') && (rowFrom - rowTo == 2)) {
            return true;
        }
    }
    return false;
}

bool Rook::canMove(char rowFrom, char laneFrom,
                   char rowTo, char laneTo) {
    return (rowTo == rowFrom) || (laneTo == laneFrom);
}

bool Knight::canMove(char rowFrom, char laneFrom,
                     char rowTo, char laneTo) {
    return (abs((rowTo - rowFrom == 2)) && (abs(laneTo - laneFrom == 1))) || 
           (abs(rowTo - rowFrom == 1) && (abs(laneTo - laneFrom == 2)));
}

bool Bishop::canMove(char rowFrom, char laneFrom,
                     char rowTo, char laneTo) {
    return (abs(rowTo - rowFrom) == abs(laneTo - laneFrom));
}

