#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define max 20

char stack[max];
int top = -1;

void push(char item){
   int x;
   if(top == max-1){
      printf("stack is full\n");
   }else{
      stack[++top] = item;
   }
}

char pop(){
   char a;
   if(top == -1){
      printf("stack underflow\n");
      exit(1);
   }
   return stack[top--];
}

int main(){
   char str[20];
   printf("Enter the string:");
   fgets(str, sizeof(str), stdin);
   for(int i=0; i<strlen(str); i++){
      push(str[i]); //push charcters of string on stack
   }
   puts(str);
   for(int i=0; i<strlen(str); i++){
      str[i]= pop(); //push charcters of string on stack
   }
   printf("rev str: ");
   puts(str);

   return 0;
}