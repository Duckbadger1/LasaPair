#ifndef Person_h
#define Person_h

#include <iostream>
#include <string>
using namespace std;

class Person { 
  private: 
    string name;
    bool ifMentor;
    LinkedList* formAnswers;
    PriorityQueue* ranking;
  public:
    Person();
    Person(string name, bool ifMentor, LinkedList formAnswers);
    Person(string name, bool ifMentor, LinkedList formAnswers, PriorityQueue ranking);
    string getName();
    void setName(string name);
    bool getIfMentor();
    void setIfMentor(bool change);
    LinkedList* getFormAnswers();
    void setFormAnswers(LinkedList* formAnswers);
    PriorityQueue* getRanking();
    void setRanking(PriorityQueue* ranking);
};
#endif 