#ifndef FIGURE_H
#define FIGURE_H

#include <string>

class Figure {
private:
    int price;
    std::string name;
    bool white;
public:
    Figure(int _price = 0,
           const std::string _name = "",
           bool _isWhite = true);
    virtual ~Figure();

    bool isWhite();
    int getPrice();
    const std::string getName();
    virtual bool canMove(char rowFrom,
                         char laneFrom,
                         char rowTo,
                         char laneTo) = 0;
};

class Pawn: public Figure {
public:
    Pawn(bool _isWhite);
    virtual bool canMove(char rowFrom,
                         char laneFrom,
                         char rowTo,
                         char laneTo);
};

class Rook: public Figure {
public:
    Rook(bool _isWhite);
    virtual bool canMove(char rowFrom,
                         char laneFrom,
                         char rowTo,
                         char laneTo);
};

class Knight: public Figure {
public:
    Knight(bool _isWhite);
    virtual bool canMove(char rowFrom,
                         char laneFrom,
                         char rowTo,
                         char laneTo);
};

class Bishop: public Figure {
public:
    Bishop(bool _isWhite);
    virtual bool canMove(char rowFrom,
                         char laneFrom,
                         char rowTo,
                         char laneTo);
};

class Queen: public Figure {
public:
    Queen(bool _isWhite);
    virtual bool canMove(char rowFrom,
                         char laneFrom,
                         char rowTo,
                         char laneTo);
};

class King: public Figure {
public:
    King(bool _isWhite);
    virtual bool canMove(char rowFrom,
                         char laneFrom,
                         char rowTo,
                         char laneTo);
};

#endif // FIGURE_H
