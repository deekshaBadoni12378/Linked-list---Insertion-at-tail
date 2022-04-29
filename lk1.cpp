#include <iostream>
#include<conio.h>
using namespace std;


struct Node{
    int data;
     Node* next;
};
struct Node *head, *tail = NULL;

void insertEnd(int data){

    Node* newNode = new Node();

    newNode->data = data;

    newNode->next = NULL;

    if(head==NULL){
        head = newNode;
    }
        else{
            Node* temp = head;
        while( temp->next!= NULL)
        temp = temp->next;
    temp->next = newNode;
        }
}
void printlist(){
Node* temp = head;
if(temp != NULL){
   cout<<"LIST:";
   while(temp != NULL){
    cout<<temp->data<<" ";
    temp = temp->next;
   }
    cout<<endl;
} else{
cout<<"list is empty.\n";
}
};



int main()
{
   insertEnd(1);
    insertEnd(2);
    insertEnd(3);
    insertEnd(4);
    printlist();


    return 0;
}
