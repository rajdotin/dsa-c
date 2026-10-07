#include<stdio.h>
#include<stdlib.h>

struct stack{
   int data;
   struct stack *next;
};
struct stack *top = NULL;

void push(){
   struct stack *new = (struct stack *)malloc(sizeof(struct stack));
   if(new == NULL){
      printf("heap overflow"); //if memory is not available
      return;
   }
   printf("enter your data: ");
   scanf("%d",&new->data);
      new->next = top;
      top = new;
}

void pop(){
   if(top == NULL){
      printf("stack is empty");
   }else{
      struct stack *del = top;
      printf("popedd item: %d\n",del->data);
      top = top->next;
      free(del);
   }
}

void peek(){
   if(top==NULL){
      printf("stack is empty");
   }else{
      printf("top of the stack is: %d",top->data);
   }
}

void display(struct stack *ptr){
   if(top == NULL){
      printf("stack is empty");
   }
   while(ptr != NULL){
      printf(" %d ",ptr->data);
      ptr = ptr->next;
   }
   printf("\n");
}
int main(){
   push();
   push();
   push();
   push();
   display(top);
   pop();
   pop();
   display(top);
   peek();
}