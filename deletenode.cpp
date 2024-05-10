#include<iostream>
using namespace std;

class Node
{
public:
  int data;
  Node *next;
};

class LinkedList
{
private:
  Node * head;
public:
  LinkedList ()
  {				// constructor
    head = NULL;
  }
  int calcSize ();
  void deleteStart ();
  void deleteEnd ();
  void deleteNthNode (int n);
  void display ();
  void insert (int data);
};

void LinkedList::deleteNthNode (int n)
{
  Node *temp = head;
  Node *previous;


  int size = calcSize ();

  if (n < 1 || n > size)
    {
      cout << "\nEnter valid position\n";
      return;
    }

  // if first node has to be deleted 
  if (n == 1)
    {
      head = head->next;
      cout << "\nValue deleted: " << temp->data << endl;
      delete (temp);
      return;
    }

  //traverse till the nth node 
  while (--n)
    {
      // store previous link as we need to change its next val 
      previous = temp;
      temp = temp->next;
    }

  // previous node's next changed to nth node's next
  previous->next = temp->next;

  cout << "Value deleted: " << temp->data << endl;
  delete (temp);
}

int LinkedList::calcSize ()
{
  Node *node = new Node ();
  node = head;

  int size = 0;

  while (node != NULL)
    {
      node = node->next;
      size++;
    }
  return size;
}

void LinkedList::insert (int data)
{

  Node *newNode = new Node ();

  newNode->data = data;
  newNode->next = head;

  // assigned head to newNode
  head = newNode;
}

void LinkedList::display ()
{

  Node *temp = new Node ();
  temp = head;

  cout << "Linked List : ";

  //as linked list will end when Node is Null
  while (temp != NULL)
    {
      cout << temp->data << " ";
      temp = temp->next;
    }
  cout << endl;
}

int main ()
{
  LinkedList *list = new LinkedList ();
  list->insert (25);
  list->insert (24);
  list->insert (24);
  list->insert (22);
  list->insert (21);
  list->insert (20);

  list->display ();

  list->deleteNthNode (2);

  list->deleteNthNode (4);

  list->display ();

  return 0;
}