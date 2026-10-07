#include <stdio.h>
#include <stdlib.h>
struct node{
   int coeff;
   int pow;
   struct node *next;
};

struct node *head = NULL;
struct node *creatnode(int c, int p){
   struct node *new = (struct node *)malloc(sizeof(struct node*));
}

struct node *addtwopolynomial(struct node *head1, struct node *head2){
   struct node *dummy = creatnode(0,0);
   struct node *temp3 = dummy;
   struct node *temp1 = head1,*temp2 = head2;

   while(temp1!=NULL && temp2!=NULL){

      if(temp1->pow < temp2->pow){
         temp3->next = temp2;
         temp2 = temp2->next;
      }else if(temp1->pow > temp2->pow){
         temp3->next = temp1;
         temp1 = temp1->next;
      }else{
         temp1->coeff = temp1->coeff +temp2->coeff;
         temp3->next = temp1;
         temp1 = temp1->next;
         temp2 = temp2->next;
      }
   }
   if(temp1!=NULL){
      temp3->next = temp1;
   }
   if(temp2!=NULL){
      temp3->next = temp2;
   }
}


int main() {
   printf("hello");
   return 0;
}