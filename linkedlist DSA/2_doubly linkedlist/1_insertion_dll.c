#include<stdio.h>
#include<stdlib.h>

struct node{
   int data;
   struct node *prev;
   struct node *next;
};
struct node *head = NULL;
struct node *tail = NULL;

void insertAtBeg(){
   struct node *new = (struct node *)malloc(sizeof(struct node));
   printf("enter the data: ");
   scanf("%d",&new->data);
   new->prev = NULL;
   new->next = NULL;

   if(head == NULL){
      head = new;
      tail = head;
   }else{
      head->prev = new;
      new->next = head;
      head = new;
   }
}

void insertAtEnd(struct node *tail){
   struct node *new = (struct node *)malloc(sizeof(struct node));
   printf("enter the data: ");
   scanf("%d",&new->data);
   new->next = NULL;

   new->prev = tail;
   tail->next = new;
   tail = new;

}

void display(struct node *ptr){
   while(ptr != NULL){
      printf(" %d ",ptr->data);
      ptr = ptr->next;
   }
}
void display_rev(struct node *ptr){
   while(ptr != NULL){
      printf(" %d ",ptr->data);
      ptr = ptr->prev;
   }
}


int main(){
   insertAtBeg();
   insertAtBeg();
   insertAtBeg();
   insertAtBeg();
   insertAtBeg();
   display(head);
   insertAtEnd(head);
   display(head);
   return 0;
}