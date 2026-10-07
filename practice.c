#include<stdio.h>
#include<stdlib.h>

struct node{
   int data;
   struct node *next;
};

struct node *head = NULL;
void createLL(){
   struct node *new = (struct node *)malloc(sizeof(struct node));
   struct node *temp;
   printf("enter data:");
   scanf("%d",&new->data);
   new->next = NULL;
   
   if(head==NULL){
      head = temp = new;
   }else{
      temp->next = new;
      temp = temp->next;
   }
}

void insertatbeg(){
   struct node *new = (struct node *)malloc(sizeof(struct node));
   printf("enter data:");
   scanf("%d",&new->data);
   new->next = head;
   head = new;
}

void insertatend(){
   struct node *new = (struct node *)malloc(sizeof(struct node));
   struct node *temp = head;
   printf("enter data:");
   scanf("%d",&new->data);
   new->next = NULL;
   if(head==NULL) head=new;
   while(temp->next != NULL){
      temp = temp->next;
   }
   temp->next = new;
}

void insertatindex(int index){
   struct node *new = (struct node *)malloc(sizeof(struct node));
   struct node *temp = head;
   printf("enter data:");
   scanf("%d",&new->data);
   new->next = NULL;
   if(head==NULL) head=new;
   int i=0;
   while(i != index-1){
      temp = temp->next;
      i++;
   }
   if(temp==NULL){
      printf("invalid position");
      free(new);
   }
   temp->next = new;
}

void deletefrombeg(){
   struct node *del = head;
   if(head==NULL){
      printf("ll is empty");
   }else{
      head = head->next;
      printf("deleted element is %d.\n",del->data);
      free(del);
   }
}

void deletfromend(){
   struct node *prev, *temp= head;
   while(temp->next != NULL){
      prev = temp;
      temp = temp->next;
   }
   prev->next = NULL;
   free(temp);
}

void deletewithvalue(int key){
   struct node *prev, *temp= head;
   if(head != NULL && head->data==key){
      head = head->next;
      free(temp);
      return;
   }
   while( temp != NULL && temp->data!=key){
      prev = temp;
      temp = temp->next;
   }
   if(temp==NULL){
      printf("value not exist\n");
      return;
   }
   prev->next = temp->next;
   free(temp);
}


void revLL(){
   struct node *curr,*prev,*nextnode;
   prev=NULL;
   curr=nextnode=head;
   while(nextnode !=NULL){
      nextnode = nextnode->next;
      curr->next=prev;
      prev=curr;
      curr = nextnode;
   }
   head = prev;
}

void display(){
   struct node *ptr = head;
   while(ptr->next != NULL){
      printf("%d->",ptr->data);
      ptr = ptr->next;
   }
   printf("%d",ptr->data);
   printf("\n");
}

int main(){
   createLL();
   createLL();
   createLL();
   createLL();
   display(); 
   revLL();
   display();
   return 0;
}