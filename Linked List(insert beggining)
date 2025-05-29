#include<stdio.h>
#include <stdlib.h>
struct Node{
  int data;
  struct Node *next;
};
struct Node *head=NULL;
void insertAtBeg(int data){
    struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode->data=data;
    newNode->next=head;
    head=newNode;
}
int main(){
    insertAtBeg(5);
    insertAtBeg(6);
}
