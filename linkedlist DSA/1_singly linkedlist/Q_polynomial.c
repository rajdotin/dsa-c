#include<stdio.h>
#include<stdlib.h>

struct Node{
   int coeff;
   int pow;
   struct Node *next;
};

struct Node *llpolaynomial(){
   struct Node *head = NULL ,*temp = NULL,*new;
   int choice;
   do{
   new = (struct Node *)malloc(sizeof(struct Node));
   printf("enter the coefficient part: ");
   scanf("%d",&new->coeff);
   printf("enter the power: ");
   scanf("%d",&new->pow);

   new->next= NULL;

   if(head == NULL){
      head=temp=new;
   }else{
      temp->next = new;
      temp = temp->next;
   }

   printf("do u want to add more (press 1): ");
   scanf("%d",&choice);

   }while(choice==1);

   return head;
};

void display(struct Node *ptr){
   printf("Polynomial: ");
   while(ptr != NULL){
      printf("%dx^%d",ptr->coeff,ptr->pow);
      if (ptr->next != NULL)
            printf(" + ");
      ptr = ptr->next;
   }
}

int main(){
   struct Node *head = llpolaynomial();
   display(head);
   return 0;
}