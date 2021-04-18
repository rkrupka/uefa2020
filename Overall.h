#ifndef OVERALL_H
#define OVERALL_H
//////////////////////////////////////////
// Plik: OVERALL.h
//////////////////////////////////////////
#include <iostream>
using namespace std;

class Overall
{
 public:
     int basic_stat; // bazowa punktacja pilkarza
     int match_rate; // wspolczynnik meczowy pilkarza
     int reset(int * wsk_rate)
     {
        *wsk_rate = match_rate = basic_stat; // reset wspolczynnikow
        return *wsk_rate;
     };
};
#endif // OVERALL_H
