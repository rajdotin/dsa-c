#include<stdio.h>
#include<stdlib.h>

struct node{
   int data;
   struct node *prev;
   struct node *next;
};
struct node *head = NULL;
struct node *tail = NULL;

void create_Dll(int value){
   struct node *new;
   new = (struct node *)malloc(sizeof(struct node));
   new->data = value;
   new->next = NULL;

   if(head == NULL){
      head = tail = new;
      new->prev = NULL;
   }else{
      tail->next = new;
      new->prev = tail;
      tail = new;
   }
}

void display(struct node *ptr){
   while(ptr!=NULL){
      printf(" %d ",ptr->data);
      ptr = ptr->next;
   }
   printf("\n");
}
void display_rev(struct node *ptr){
   while(ptr!=NULL){
      printf(" %d ",ptr->data);
      ptr = ptr->prev;
   }
}

int main(){
   create_Dll(20);
   create_Dll(30);
   create_Dll(50);
   create_Dll(80);
   display(head);
   display_rev(tail);
}