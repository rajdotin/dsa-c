#include <stdio.h>
#define max 5

int DEque[max];
int front=-1,rare=-1;

void enqueueFront(){
   int x;
   printf("enter element: ");
   scanf("%d",&x);

   if((front==0 && rare==max-1) || (front==rare+1)){
      printf("queue is full.\n");
   }else if(front==-1&&rare==-1){
      front = rare = 0;
      DEque[front]=x;
   }else if(front == 0){
      front = max-1;
      DEque[front] = x;
   }else{
      front--;
      DEque[front] = x;
   }
}

void enqueueRare(){
   int x;
   printf("enter element: ");
   scanf("%d",&x);

   if((front==0&&rare==max-1) || (front==rare+1)){
      printf("queue is full.\n");
   }else if(front==-1&&rare==-1){
      front = rare = 0;
      DEque[rare]=x;
   }else if(rare == max-1){
      rare = 0;
      DEque[rare] = x;
   }else{
      rare++;
      DEque[rare] = x;
   }
}


void dequeueFront(){

   if(front==-1&&rare==-1){
      printf("empty DEqueue.");
   }else if(front == rare){
      printf("poped ele: %d\n",DEque[front]);
      front = rare = -1;
   }else if(front == max-1){
      printf("poped ele: %d\n",DEque[front]);
      front = 0;
   }else{
      printf("poped ele: %d\n",DEque[front]);
      front++;
   }
}

void dequeueRare(){

   if(front==-1&&rare==-1){
      printf("empty DEqueue.");
   }else if(front == rare){
      printf("poped ele: %d\n",DEque[rare]);
      front = rare = -1;
   }else if(rare == 0){
      printf("poped ele: %d\n",DEque[rare]);
      rare = max-1;
   }else{
      printf("poped ele: %d\n",DEque[rare]);
      rare--;
   }
}
void display(){
   int i = front;
   while(i != rare){
      printf("%d ",DEque[i]);
      i = (i+1)%max;
   }
      printf("%d \n",DEque[rare]);

}

int main(){
   enqueueFront();
   enqueueFront();
   enqueueFront();
   display();
   enqueueRare();
   enqueueRare();
   display();
   return 0;
}