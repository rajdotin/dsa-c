#include<stdio.h>
#define max 5

int cirqueue[max];
int front = -1,rare = -1;

void enqueue(){
   int x;
   printf("enter element: ");
   scanf("%d",&x);

   if((rare+1)%max == front){
      printf("circular queue is full.\n");
   }else if(front == -1 && rare== -1){
      front++,rare++;
      cirqueue[rare] = x;
   }else{
      rare = (rare+1)%max;
      cirqueue[rare]=x;
   }
}

void dequeue(){

   if(front == -1 && rare== -1){
      printf("circular queue is empty");
   }else if(front == rare){
      printf("poppes item: %d\n", cirqueue[front]);
   }else{
      printf("\npopped item: %d\n", cirqueue[front]);
      front = (front+1)%max;
   }
}

void display(){
   if(front == -1 && rare== -1){
      printf("circular queue is empty");
   }else{
      int i = front;
      while(i!=rare){
         printf("%d ",cirqueue[i]);
         i = (i+1)%max;
      }
         printf("%d ",cirqueue[i]);
   }
   printf("\n");
}

int main(){
   enqueue();
   enqueue();
   enqueue();
   enqueue();
   enqueue();
   display();
   dequeue();
   display();
   enqueue();
   display();
}