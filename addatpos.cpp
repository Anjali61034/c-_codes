#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
};
int listsize;
void insert(Node** head,int data){
   Node* new_node=new Node();
   new_node->data=data;
   new_node->next=*head;
   *head=new_node;
   listsize++;
}

void insertpos(int pos,int data,Node** head){
     Node* new_node=new Node();
   new_node->data=data;
   new_node->next=nullptr;temp->next=new_node->next;
if(pos<1 || pos>listsize+1){
    cout<<"Invalid position"<<" ";
    return;
}
if(pos==1){
    new_node->next=*head;
   *head=new_node;
   listsize++;
}
else{
    Node*temp=*head;
    while(--pos>1){
        
    temp=temp->next;
    }
    new_node->next=temp->next;
    temp->next=new_node;
    listsize++;
}
}

void display(Node*node){
    cout<<"linked list"<<" ";
    while(node!=nullptr){
        cout<<node->data<<"  ";
        node=node->next;}
cout<<endl;

} 
int main(){
    Node* head=nullptr;
insert(&head,120);
insert(&head,100);
insert(&head,80);
insert(&head,60);
display(head);
insertpos(0,70,&head);
insertpos(4,90,&head);
insertpos(6,110,&head);
display(head);
return 0;

}
