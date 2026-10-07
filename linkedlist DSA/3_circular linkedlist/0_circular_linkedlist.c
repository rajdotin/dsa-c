#include<stdio.h>
#include<stdlib.h>

struct Node{
   int data;
   struct Node *next;
};

void linkedlist_Traversal(struct Node *head){
   struct Node *ptr = head;
   do{
      printf("element = %d\n",ptr->data);
      ptr = ptr->next;
   }while(ptr != head);
}

struct Node *insertAtFirst(struct Node *head, int data){
   struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
   ptr->data = data;
   struct Node *p = head;
   do{
      p = p->next;
   }while(p->next != head);
   
   ptr->next = head;
   p->next = ptr;
   head = ptr;
   
   return head;
}

int main(){
   struct Node *head;
   struct Node *second;
   struct Node *third;

   head = (struct Node *)malloc(sizeof(struct Node));
   second = (struct Node *)malloc(sizeof(struct Node));
   third = (struct Node *)malloc(sizeof(struct Node));

   head->data = 10;
   head->next = second;
   second->data = 20;
   second->next = third;
   third->data = 30;
   third->next = head;

   linkedlist_Traversal(head);
   printf("\n");

   head = insertAtFirst(head,5);
   linkedlist_Traversal(head);
   printf("\n");

   return 0;
}