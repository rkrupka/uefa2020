#ifndef PLAYER_H
#define PLAYER_H
//////////////////////////////////////////
// Plik: Player.h
//////////////////////////////////////////
#include <iostream>
#include "Person.h"
#include "Overall.h"
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
