#include <stdio.h>
#include <stdlib.h>


void bubblesort(int arr[],int n){
   
   for(int i=0; i<n-1; i++){
      int swapped =0;
      for(int j=0; j<n-1-i; j++){
         if(arr[j]>arr[j+1]){
            int temp = arr[j];
            arr[j]= arr[j+1];
            arr[j+1]= temp;
            swapped=1;
         }
         if(swapped==0) break;
      }
   }
}

void display(int arr[],int n){
   for(int i=0; i<n; i++){
      printf("%d ",arr[i]);
   }
}
int main() {
   int arr[]= {20,30,10,5,25};
   int n = sizeof(arr)/sizeof(int);
   bubblesort(arr,n);
   display(arr,n);
}