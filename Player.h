#ifndef PLAYER_H
#define PLAYER_h

#include <string>
#include <iostream>
using namespace std;

class Player{
    public:
        virtual char makeMove()=0;
        virtual string getName();
        virtual ~Player();
};

#endif