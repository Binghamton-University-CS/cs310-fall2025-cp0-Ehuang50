#include <stdlib.h>
#include <string> 
#include "Animal.h"

using namespace std;

class AnimalsInZoo {
   public:
      AnimalsInZoo(Animal anima);

      AnimalsInZoo();

      void display();

   private:
      int numAnimals;
      Animal animal;
};