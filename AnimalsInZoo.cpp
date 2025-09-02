#include "AnimalsInZoo.h"
#include <stdlib.h>
#include <string> 
#include <iostream>
using namespace std;

AnimalsInZoo::AnimalsInZoo(Animal anima) {
         animal = anima;
         numAnimals = 1;
      }

AnimalsInZoo::AnimalsInZoo() {
        numAnimals = 0;
      }

void AnimalsInZoo::display() {
        cout << numAnimals << endl;
        if(numAnimals == 1){
            animal.display();
        }
}