#include <iostream>
#include "Referee.h"
using namespace std;

Player* Referee::refGame(Player* player, Player* comp){
    char player_move = player->makeMove();

    char computer_move = comp->makeMove();

    if (player_move==computer_move){
        cout<<"It's a tie!";
        return nullptr;
    }
    elseif (player_move=='P'){
        cout<<"Player wins!";
        return &player;
    }
    else{
        cout<<"Computer wins!"
        return &comp;
    }
};