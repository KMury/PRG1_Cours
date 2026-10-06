/* --------------------------- 
Laboratoire : 02
Auteur(s) : Kévin MURY
Date : 22.09.2026
But : Calcul du temps de trajet 
Remarque(s) : 
--------------------------- */

#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

int main()
{
   const double dx = 3.0, dy = 10.0;
   const double speed_on_road = 5.0;
   const double speed_on_dirt = 2.0;
   double distance_on_road = 6.0;

   cout << "Bienvenue dans ce programme qui calcule le temps de trajet." << endl;
   cout << "Veuillez entrer une valeur numerique entre 0 et 10 compris. ";
   cin >> distance_on_road;

   double road_time = distance_on_road / speed_on_road;
   double L3 = dy - distance_on_road;
   double distance_on_dirt = sqrt(pow(L3, 2) + pow(dx, 2));
   double dirt_time = distance_on_dirt / speed_on_dirt;
   double total_time_decimal = road_time + dirt_time;

   double hours = trunc(total_time_decimal);
   double minutes = static_cast<unsigned int>(total_time_decimal * 60) % 60;

   cout << "Le temps de parcours total est de " <<
      hours << "h" << trunc(minutes) << "." << endl;

   return EXIT_SUCCESS;
}