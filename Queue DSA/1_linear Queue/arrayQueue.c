#include<stdio.h>
#define max 10

int queue[max];
int front=-1, rare=-1;

void enqueue(int n){
   if(rare == max-1){
      printf("queue is full.\n");
   }else if(front==-1 && rare==-1){
      front = rare = 0;
      queue[rare] = n;   
   }else{
      rare++;
      queue[rare] = n;
   }
}

void dequeue(){
   if(front==-1 && rare==-1){
      printf("queue is empty.");
   }else if(front==rare ){
      printf("deleted element is: %d\n",queue[front]);
      front=rare=-1;
   }else{
      printf("deleted element is: %d\n",queue[front]);
      front++;
   }
}
void display(){
   for(int i=front; i<rare; i++){
      printf("%d<-",queue[i]);
   }
}

int main(){
   enqueue(1);
   enqueue(2);
   enqueue(3);
   enqueue(4);
   enqueue(5);
   display();

   dequeue();
   dequeue();
   dequeue();
   dequeue();
   dequeue();
   dequeue();
   dequeue();
   display();
}