#include<stdio.h>
#include<stdlib.h>


struct Node {
   int data;
   struct Node *next;
};
struct Node *head = NULL;

struct Node *createNode(){
   int choice;
   do{
      struct Node *new = (struct Node *)malloc(sizeof(struct Node));
      printf("enter data: ");
      scanf("%d",&new->data);
      new->next = NULL;
      struct Node *temp;

      if(head == NULL){
         head = temp = new;
      }else{
         temp->next = new;
         temp = temp->next;
      }
      printf("want to add onr more node?(press 1: )");
      scanf("%d",&choice);
      
   }while(choice==1);
   return head;
};

void linkedlist_Traversal(struct Node *ptr){
   while(ptr!=NULL){
      printf("element = %d\n",ptr->data);
      ptr = ptr->next;
   }
}

int main(){
   createNode();
   linkedlist_Traversal(head);
   return 0;
}
