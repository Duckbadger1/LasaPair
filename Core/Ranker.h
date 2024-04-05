/*
Ranker.h
Ranker

This header file contains the Ranker class declaration.
The purpose of this file is to create a ranking list for each person using data from the form
*/
#ifndef Ranker_h
#define Ranker_h

#include "PriorityQueue.h"
#include "LinkedList.h"
#include "Person.h"

namespace Ranker{
// Function that ranks a person's possible mentors or students
  void Ranker(Person personX, LinkedList listY){
    //algorithm that goes through listY and assigns a compatability value to thing in listY
    //Then add the person in listY with that compatability value to personX's priority Queue
    //returns nothing
    
  }

};

#endif