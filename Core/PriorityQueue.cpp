#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include "PriorityQueue.h"

void PriorityQueue::push(void *item, int priority)
{
  node* temp = new node;
  temp->data = item;
  temp->priority = priority;
  if (front == NULL) {
    front = temp;
  } else {
    node* curr = front;
    while (curr->link != NULL && curr->link->priority <= priority) {
      curr = curr->link;
    }
    temp->link = curr->link;
    curr->link = temp;
  }
}

void* PriorityQueue::top() {
  if (front == NULL) {
    return NULL;
  } else {
    return front->data;
  }
}

void PriorityQueue::pop() {
  if (front != NULL) {
    front = front->link;
  }
}

void PriorityQueue::display() {
  node* curr = front;
  while (curr->link != NULL) {
    std::cout << curr->priority << " " << (char*)curr->data << std::endl;
    curr = curr->link;
  }
}