#include<stdio.h>
#include<stdlib.h>

struct Node{
   int data;
   struct Node *next;
};

//! case 4.
struct Node *deleteAtValue(struct Node *head, int value){
   struct Node *p = head;
   struct Node *del = head->next;
   while(del->data !=value && del->next !=NULL){
      del = del->next;
      p = p->next;
   }
   if(del->data == value){
      p->next = del->next;
      free(del);
   }
   
   return head;
};

//! case 3.
struct Node *deleteFromEnd(struct Node *head){
   struct Node *p =head;
   struct Node *del = head->next;

   while(del->next != NULL){
      del= del->next;
      p = p->next;
   }
   p->next = NULL;
   free(del);
   return head;
}

//! case 2.
struct Node *deleteAtIndex(struct Node *head, int index){
   struct Node *p = head;
   int i = 0;
   while(i != index-1){
      p = head->next;
      i++;
   }
   struct Node *del = p->next;
   p->next = del->next;
   free(del);
   return head;
};

//! case 1.
struct Node *deleteTheFirst(struct Node *head){
   struct Node *ptr = head;
   head = head->next;
   free(ptr);
   return head;
};

//! traversal.
void linkedlist_Traversal(struct Node *head){
   while(head != NULL){
      printf("element = %d\n",head->data);
      head = head->next;
   }
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
   third->next = NULL;

   linkedlist_Traversal(head);
   printf("\n");

   // head = deleteTheFirst(head);
   // linkedlist_Traversal(head);
   // printf("\n");

   // deleteAtIndex(head,1);
   // linkedlist_Traversal(head);
   // printf("\n");

   // deleteFromEnd(head);
   // linkedlist_Traversal(head);
   // printf("\n");

   deleteAtValue(head,20);
   linkedlist_Traversal(head);
   printf("\n");
}