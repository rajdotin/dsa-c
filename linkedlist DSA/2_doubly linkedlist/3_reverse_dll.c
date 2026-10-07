#include <stdio.h>
#include <stdlib.h>

struct node{
   int data;
   struct node *prev;
   struct node *next;
};

struct node *head = NULL;
struct node *tail = NULL;

void creation(int n){
   struct node *new = (struct node*)malloc(sizeof(struct node));
   new->data = n;
   new->next = NULL;
   if(head==NULL && tail==NULL){
      head = tail = new;
      new->prev = NULL;
   }else{
      tail->next = new;
      new->prev = tail;
      tail = tail->next;
   }
}

void reverse(){
   struct node *curr, *temp;
   curr = temp = head;
   while(temp != NULL){
      temp = temp->next;
      curr->next = curr->prev;
      curr->prev = temp;
      curr = temp;
   }
   temp = head;
   head = tail;
   tail = temp;
}

void display(struct node *ptr){
   while(ptr != NULL){
      printf(" %d ",ptr->data);
      ptr = ptr->next;
   }
   printf("\n");
}

int main(){
   creation(10);
   creation(20);
   creation(30);
   creation(40);
   creation(50);
   display(head);
   reverse();
   display(head);
}