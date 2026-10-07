#include <stdio.h>
#include <stdlib.h>

struct node{
   int data;
   struct node *next;
};

struct node *head = NULL;

void creation(int n){
   struct node *new = (struct node*)malloc(sizeof(struct node));
   struct node *temp;
   new->data = n;
   new->next = NULL;
   if(head==NULL){
      head = temp = new;
   }else{
      temp->next = new;
      temp = temp->next;
   }
}

void reverse(){
   struct node *prev, *curr, *nextnode;
   prev=NULL;
   curr = nextnode = head;
   while(nextnode != NULL){
      nextnode = nextnode->next;
      curr->next=prev;
      prev = curr;
      curr = nextnode;
   }
   head = prev;
}
void display(struct node *ptr){
   while(ptr != NULL){
      printf(" %d ",ptr->data);
      ptr = ptr->next;
   }
   printf("\n");
}

int main() {
   creation(10);
   creation(20);
   creation(30);
   creation(40);
   creation(50);
   display(head);
   reverse();
   display(head);
   return 0;
}
