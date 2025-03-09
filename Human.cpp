#include <iostream>
#include "Human.h"
using namespace std;

Human::Human(string name) : name(name){};

char Human::makeMove(){
    char move;
    cout<<"Make move(R/P/S): ";
    cin>>move;
    return move;
};

string Human::getName(){
    return name;
};