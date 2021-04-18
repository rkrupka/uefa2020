#ifndef PLAYER_H
#define PLAYER_H
//////////////////////////////////////////
// Plik: Player.h
//////////////////////////////////////////
#include <iostream>
using namespace std;

class Player : public Person
{
  public:
    Overall Zawodnik;
    int form;
    enum position
    {
        gk,
        fp
    };
};
#endif
