#include<bits/stdc++.h>
using namespace std;

// Node structure
// Each node contains the link to the next node and some data variables.
class node{
    public:
    int data;
    node* next;//pointer is pointing to next node 

    node(int val){//val will store value of node
        data=val;
        next=NULL;
    }
};
//Make a node named head. This will act as the start of the linked list.
void insertAtTail(node* &head, int val){
    node* n= new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    node* temp=head;
    //till the we reach null insert next node datas to temp
    while(temp->next!=NULL) temp=temp->next;//basically temp is our pointer
    temp->next=n;
}
//printig our linked-list
void display(node* head){
    node* temp=head;
    while(temp->next!=NULL){
        cout<<temp->next;
        temp=temp->next;
    }
}

int main() 
{
    node* head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    display(head);

    return 0;
}