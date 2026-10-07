#include<stdio.h>
#include<stdlib.h>

struct node{
   int data;
   struct node *next;
};

struct node *head = NULL;
void createLL(){
   struct node *new = (struct node *)malloc(sizeof(struct node));
   struct node *temp;
   printf("enter data:");
   scanf("%d",&new->data);
   new->next = NULL;
   
   if(head==NULL){
      head = temp = new;
   }else{
      temp->next = new;
      temp = new;
   }
}

//! create new LL that contains alternate positions value of any LL.
struct node *createnode(int data){
   struct node *new = (struct node *)malloc(sizeof(struct node));
   new->data = data;
   new->next = NULL;
   return new;
}
struct node *alternateLL(struct node *head){
   struct node *newhead=NULL, *temp, *new;
   struct node *ptr = head;
   while(ptr!=NULL){
      struct node *new = createnode(ptr->data);
      if(newhead==NULL){
         newhead = temp = new;
      }else{
         temp->next = new;
         temp = new;
      }
      if(ptr->next!=NULL){
         ptr= ptr->next->next;
      }else{
         break;
      }
   }
   return newhead;
}




void display(struct node *newhead){
   struct node *ptr = newhead;
   while(ptr->next != NULL){
      printf("%d->",ptr->data);
      ptr = ptr->next;
   }
   printf("%d",ptr->data);
   printf("\n");
}

int main(){
   createLL();
   createLL();
   createLL();
   createLL();
   createLL();
   createLL();
   createLL();
   display(head); 
   struct node *newhead = alternateLL(head);
   display(newhead);
   return 0;
}
