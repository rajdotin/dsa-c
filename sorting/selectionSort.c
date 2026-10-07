#include <stdio.h>
#include <stdlib.h>


void selectionsort(int arr[],int n){
   for(int i=0; i<n-1; i++){
      int min = i;
      //finding min in unsorted part
      for(int j=i+1; j<n; j++){
         if(arr[min]>arr[j]){
            min = j;
         }
      }
      //swap only if needed
      if(min!=i){
         int temp = arr[i];
         arr[i] = arr[min];
         arr[min] = temp;
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
   selectionsort(arr,n);
   display(arr,n);
}