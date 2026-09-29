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
   double dx = 3.0, dy = 10.0;
   double distance_on_road = 6.0, distance_on_dirt, L3;
   double speed_on_road = 5.0, speed_on_dirt = 2.0;
   double total_time_decimal, road_time, dirt_time;
   string user_entry;

   cout << "Bienvenue dans ce programme qui calcule le temps de trajet." << endl;
   cout << "Veuillez entrer une valeur numerique entre 0 et 10 compris." << endl;
   cin >> user_entry;

   try {
      distance_on_road = stod(user_entry);
   }
   catch (const invalid_argument&)
   {
      cout << "La valeur entree n'est pas valable." << endl;
      return EXIT_FAILURE;
   }

   if (distance_on_road < 0.0 || distance_on_road > 10.0) {
      cout << "La valeur entree n'est pas valable." << endl;
      return EXIT_FAILURE;
   }

   road_time = distance_on_road / speed_on_road;
   L3 = dy - distance_on_road;
   distance_on_dirt = sqrt(pow(L3, 2) + pow(dx, 2));
   dirt_time = distance_on_dirt / speed_on_dirt;
   total_time_decimal = road_time + dirt_time;
   double hours = trunc(total_time_decimal);
   double minutes = static_cast<unsigned int>(total_time_decimal * 60) % 60;
   double secondes = static_cast<unsigned int>(minutes * 60) % 60;

   cout << "Le temps de parcours total est de " <<
      hours << "h" << trunc(minutes) << "." << endl;

   return EXIT_SUCCESS;
}