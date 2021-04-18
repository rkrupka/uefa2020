#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "Formation.h"
#include "Overall.h"
#include "Person.h"
#include "Player.h"
#include "Coach.h"
#include "Team.h"

using namespace std;

int main()
{
    Overall Tstat;

    Tstat.basic_stat = 70;
    Tstat.match_rate = 10;
    int *wsk_stat;
    wsk_stat = &Tstat.match_rate;

    cout << "Bazowa punktacja: " << Tstat.basic_stat <<
    ", zas wspolczynnik meczowy to: " << Tstat.match_rate <<
     "." << endl;

     Tstat.reset(wsk_stat);

    cout << "Bazowa punktacja: " << Tstat.basic_stat <<
    ", zas wspolczynnik meczowy to: " << Tstat.match_rate <<
     "." << endl;

     Coach trener;

     trener.charisma = 100;
     cout << trener.charisma << endl;

     //cout <<

    return 0;
}
