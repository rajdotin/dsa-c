#include<stdio.h>
#include<stdlib.h>


struct Node{
   int data;
   struct Node *next;
};

struct Node *searchKey(struct Node *head){
   struct Node *temp = head;
   int found = -1;
   if(head==NULL){
      printf("LL is empty.");
   }
   else{
      printf("enter element do u want to find: ");
      int key;
      scanf("%d",&key);

      while(temp != NULL){
         if(temp->data == key){
            found = 1;
            break;
         }else{
            temp = temp->next;
         }
      }
      if(found==1){
         printf("%d is present in LL.\n",key);
      }else{
         printf("%d is not present in LL.\n",key);
      }
      
   }
};

int main(){

}
