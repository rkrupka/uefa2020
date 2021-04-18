#ifndef PERSON_H
#define PERSON_H
//////////////////////////////////////////
// Plik: Person.h
//////////////////////////////////////////
#include <iostream>
using namespace std;

class Person
{
 public:
     enum nationality
     {
         POL,
         GER,
         ITA,
         ESP,
         ENG,
         NED,
         BEL,
         POR,
         UKR,
         SUI,
         CRO,
         FRA,
         CZE,
         AUT,
         TUR,
         RUS,
     };
     enum league
     {
         PD, // Primiera Division;
         BL, // Bundesliga;
         SA, // Serie A;
         LE, // Lotto Ekstraklasa;
         PL, // Premier League;
         ED, // Eredivisie;
     };
     string first_name;
     string last_name;
};
#endif // PERSON_H
