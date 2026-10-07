#include <stdio.h>
#include <stdlib.h>

struct cirqueue{
   int data;
   struct cirqueue *next;
};
struct cirqueue *front =NULL;
struct cirqueue *rare =NULL;

void ennqueue(){
   struct cirqueue *new = (struct cirqueue *)malloc(sizeof(struct cirqueue));
   printf("enter element: ");
   scanf("%d",&new->data);
   new->next = front;
   if(front==NULL){
      front = rare = new;
   }else{
      rare->next=new;
      rare = rare->next;
   }
}
void dequeue(){
   struct cirqueue *del = front;
   if(front == NULL && rare == NULL){
      printf("stack is empty");
   }else if(front == rare){
      front = rare = 0;
      printf("deleted element is %d\n",del->data);
      free(del);
   }else{
      front = front->next;
      rare->next = front;
      printf("deleted element is %d\n",del->data);
      free(del);
   }
}
void display(struct cirqueue *ptr){
   while(ptr->next != front){
      printf("%d ",ptr->data);
      ptr = ptr->next;
   }
      printf("%d ",ptr->data);
   printf("\n");
}
int main() {
   ennqueue();
   ennqueue();
   ennqueue();
   display(front);
   dequeue();
   display(front);
   return 0;
}