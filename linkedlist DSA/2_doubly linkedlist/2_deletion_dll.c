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


void delAtBeg(){
   struct node *temp = head;
   if(head == 0){
      printf("empty dll no item for pop!\n");
   }else if(head == tail){
      head = tail = 0;
      free(temp);
   }else{
      head = head->next;
      head->prev = NULL;
      free(temp);
   } 
}

void delAtEnd(){
   struct node *temp = tail;
   if(head == 0) printf("empty dll");
   else if(head==tail){
      head = tail = 0;
      free(temp);
   }else{
      // tail = tail->prev;
      // tail->next = NULL;
      //or
      tail->prev->next = NULL;
      tail = tail->next;
      free(temp);
   }
}

void delAtindex(int index){
   struct node *temp = head;
   int i = 0;
   while(i != index){
      temp = temp->next;
      i++;
   }
   temp->prev->next = temp->next;
   temp->next->prev = temp->prev;
   printf("deleted element :%d\n",temp->data);
   free(temp);
   
}

void display(struct node *ptr){
   while(ptr!=NULL){
      printf(" %d ",ptr->data);
      ptr = ptr->next;
   }
   printf("\n");
}


int main(){
   create_Dll(10);
   create_Dll(20);
   create_Dll(30);
   create_Dll(40);
   display(head);
   delAtBeg();
   display(head);
}