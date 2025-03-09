#include "Human.h"
#include "Computer.h"
#include "Referee.h"
#include <iostream>

int main(){
    Human human("Adham");
    Computer comp;
    Referee ref;
    Player* winner = ref.refGame(&human, &comp);

    return 0;
};