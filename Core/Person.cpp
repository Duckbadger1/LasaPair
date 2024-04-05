#include "Person.h"

Person::Person(){
  name = "";
  ifMentor = false;
  formAnswers = nullptr;
  ranking = nullptr;
}

Person::Person(string name, bool ifMentor, LinkedList formAnswers){
  this -> name = name;
  this -> ifMentor = ifMentor;
  this -> formAnswers = formAnswers;
  ranking = nullptr;
}

Person::Person(string name, bool ifMentor, LinkedList formAnswers, PriorityQueue ranking){
  this -> name = name;
  this -> ifMentor = ifMentor;
  this -> formAnswers = formAnswers;
  this -> ranking = ranking;
}

string Person::getName(){
  return name;
}

void Person::setName(string name){
  this -> name = name;
}

bool Person::getIfMentor(){
  return ifMentor;
}

void Person::setIfMentor(bool change){
  this -> ifMentor = change;
}

LinkedList* Person::getFormAnswers(){
  return formAnswers;
}

void Person::setFormAnswers(LinkedList* formAnswers){
  this -> formAnswers = formAnswers;
}

PriorityQueue* Person::getRanking(){
  return ranking;
}

void Person::setRanking(PriorityQueue* ranking){
  this -> ranking = ranking;
}
