struct node
{
  int priority;
  void* data;
  struct node *link;
};

class PriorityQueue
{
  private:
    node *front;
  public:
  PriorityQueue() {
    front = nullptr;
  }
  void push(void *item, int priority);
  void* top();
  void pop();
  void display();
};