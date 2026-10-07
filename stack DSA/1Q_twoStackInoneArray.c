#include<stdio.h>
#include<stdlib.h>
#define N 11

int arr[N];
int top1 = -1,top2 = N;

//! push operation
void push_stack1(int data){
   if(top1<top2-1){
      arr[++top1] = data;
   }else{
      printf("stack is full");
   }
}
void push_stack2(int data){
   if(top1<top2-1){
      arr[--top2] = data;
   }else{
      printf("stack is full");
   }
}

//! pop operation
void pop_stack1(){
   if(top1>=0){
      int popped_value = arr[top1--];
      printf("popped_value = %d", popped_value);
   }else{
      printf("stack is empty! can't pop.\n");
   }
}
void pop_stack2(){
   if(top2<N){
      int popped_value = arr[top2++];
      printf("popped_value = %d", popped_value);
   }else{
      printf("stack is empty! can't pop.\n");
   }
}


int main(){
   push_stack1(32);
   push_stack2(20);
   push_stack2(20);
}