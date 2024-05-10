#include<iostream>
using namespace std;
 class Node{
    public:
    int data;
    Node* next;
 };
 class LinkedList{
    private:
    Node* head;
    public:
    LinkedList(){
    head=NULL;
    }
    void insertFront(int data);
    void printlist();
 };

 void LinkedList::insertFront(int data){
    Node* new_node = new Node();
    new_node-> data = data;
    new_node->next=head;
    head=new_node;

 }

 void LinkedList::printlist(){
   Node* node=new Node;
   node = head;
   
    cout<<"Linked List";
    while(node!=NULL){
        cout<<node->data<<" ";
    node=node->next;}
    cout<<endl;
   }

   int main(){
    LinkedList* new_list=new LinkedList();
    new_list->insertFront(5);
    new_list->insertFront(8);
    new_list->insertFront(10);
    new_list->printlist();

    return 0;
   }


