#ifndef TEAM_H
#define TEAM_H
//////////////////////////////////////////
// Plik: Team.h
//////////////////////////////////////////
#include <iostream>
using namespace std;

class Team
    : public Player, public Coach
{
  public:
    Player play1;
    Player play2;
    Player play3;
    Player play4;
    Player play5;
    Player play6;
    Player play7;
    Player play8;
    Player play9;
    Player play10;
    Player play11;

    Coach coach1;

    int morale;

    int attack_power;
    int defence_power;

    Formation tact;
};
#endif
