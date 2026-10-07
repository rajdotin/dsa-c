#include<stdio.h>
#define N 5

int stack[N];
int top = -1;

void push(){
   int x;
   if(top == N-1){
      printf("stack is full\n\n");
   }else{
      printf("enter data: ");
      scanf("%d",&x);
      top++;
      stack[top] = x;
   }
}
void pop(){
   int item;
   if(top == -1){
      printf("stack is empty\n\n");
   }else{
      // item = stack[top];
      printf("poped item: %d\n",stack[top]);
      top--;
   }
}
void display(){
   int temp = top;
   if(top == -1){
      printf("stack is empty");
   }
   printf("stack is:\n");
   while(temp!=-1){
      printf("%d\n",stack[temp]);
      temp--;
   }
}
int main(){
   push();
   push();
   push();
   display();
   pop();
   display();
}