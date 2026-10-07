#include <stdio.h>
#include <stdlib.h>


void linearSearch(int arr[], int n, int key){
   int found=0;
   for(int i=0; i<n; i++){
      if(arr[i]==key){
         printf("is index par h bhai:%d\n",i);
         found=1;
         break;
      }
   }
   if(!found){
      printf("nahi h isme");
   }
}
int main() {
   int arr[] = {23,34,5,7,12,45,29};
   int n = sizeof(arr)/sizeof(int);
   linearSearch(arr,n,22);
   return 0;
}