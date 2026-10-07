#include<stdio.h>
#include<stdlib.h>

struct queue{
   int data;
   struct queue *next;
};

struct queue *front = NULL;
struct queue *rare = NULL;

void enqueue(){
   struct queue *new = (struct queue *)malloc(sizeof(struct queue));
   printf("enter data: ");
   scanf("%d",&new->data);
   new->next = NULL;
   if(front==NULL && rare==NULL){
      front = rare = new;
   }else{
      rare->next = new;
      rare = rare->next;
   }
}

void dequeue(){
   struct queue *del;
   if(front == NULL && rare == NULL){
      printf("stack is empty");
   }else{
      del = front; 
      front = front->next;
      printf("deleted element is %d\n",del->data);
      free(del);
   }
}

void display(struct queue *ptr){
   while(ptr != NULL){
      printf("%d ",ptr->data);
      ptr = ptr->next;
   }
   printf("\n");
}
int main(){
   enqueue();
   enqueue();
   enqueue();
   enqueue();
   display(front);
   dequeue();
   dequeue();
   display(front);
}