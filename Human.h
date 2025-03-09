#ifndef HUMAN_H
#define PLAYER_H

#include <string>
#include <iostream>
using namespace std;

class Human: public Player {
    private:
        string name;
    public:
        Human(string name="Human");
        char makeMove(move);
        string getName();
};

#endif