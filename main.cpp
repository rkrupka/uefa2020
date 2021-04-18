#include <iostream>
#include <string>
#include "Formation.h"
#include "Overall.h"
#include "Person.h"

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

    //Tstat.basic_stat = Tstat.reset(Tstat.basic_stat);
    //Tstat.match_rate = Tstat.reset(Tstat.match_rate);

    cout << "Bazowa punktacja: " << Tstat.basic_stat <<
    ", zas wspolczynnik meczowy to: " << Tstat.match_rate <<
     "." << endl;

    return 0;
}
