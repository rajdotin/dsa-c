#include<stdio.h>
#include<stdlib.h>
struct Node{
   int data;
   struct Node *next;
};

struct Node *insertAfterNode(struct Node *head, struct Node *prevNode, int data){
   struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
   ptr->next = prevNode->next;
   ptr->data = data;
   prevNode->next = ptr;
   return head;
};

struct Node *insertAtEnd(struct Node *head, int data){
   struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
   struct Node *p = head;
   while(p->next != NULL){
      p = p->next;
   }
   ptr->next = NULL;
   ptr->data = data;
   p->next = ptr;
   return head;
};

struct Node *insertAtIndex(struct Node *head, int data, int index){
   struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
   struct Node *p = head;
   int i =0;
   while(i != index-1){
      p = p->next;
      i++;
   }
   ptr->next = p->next;
   ptr->data = data;
   p->next = ptr;
   return head;
};

struct Node *insertAtBegin(struct Node *head, int data){
   struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
   ptr->next = head;
   ptr->data = data;
   return ptr;
};

void linkedlist_Traversal(struct Node *ptr){
   while(ptr!=NULL){
      printf("element = %d\n",ptr->data);
      ptr = ptr->next;
   }
}

int main(){
   struct Node *head;
   struct Node *second;
   struct Node *third;

   // allocate memory in nodes in linkedlist in heap.
   head = (struct Node *)malloc(sizeof(struct Node));
   second = (struct Node *)malloc(sizeof(struct Node));
   third = (struct Node *)malloc(sizeof(struct Node));

   //linking
   head->data = 7;
   head->next = second;

   second->data = 10;
   second->next = third;

   third->data = 13;
   third->next = NULL;

   linkedlist_Traversal(head);
   printf("\n");
   // head = insertAtBegin(head,30);
   // printf("\n");
   // linkedlist_Traversal(head);
   // insertAtIndex(head,20,2);
   // insertAtEnd(head,20);
   // insertAfterNode(head, second, 44);
   // linkedlist_Traversal(head);
}