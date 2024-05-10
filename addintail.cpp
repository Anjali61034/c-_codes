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
      head= NULL;}
      void  insertLast(int data);
      void display();
    
};

void LinkedList::insertLast(int data){
    Node* new_node=new Node;
    new_node->data=data;
    new_node->next=NULL;
    if(head==NULL){
    head=new_node;
    cout<<new_node-> data<<" "<<"inserted"<<endl;
    return;
    }
    struct Node*temp=head;
    while(temp->next!=NULL)
    temp=temp->next;
    temp->next=new_node;
    cout<<new_node->data<<" "<<"inserted"<<endl;

}

void LinkedList::display(){
    Node* node=new Node;
    node=head;
    while(node!=NULL)
    {cout<<node->data<<" ";
    node=node->next;
    }
    cout<<endl;

}

int main(){
    LinkedList* new_list=new LinkedList();
    new_list->insertLast(10);
    new_list->insertLast(20);
    new_list->insertLast(30);
    new_list->display();
    return 0;
}