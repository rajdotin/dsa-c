#include<stdio.h>


void selectionsort(int arr[], int n){
   for(int i=0; i<n; i++){
      int min = i;
      for(int j=i+1; j<n-1; j++){
         if(arr[j]<arr[min]){
            min=j;
         }
      }
      if(min != i){
         int temp = arr[i];
         arr[i] = arr[min];
         arr[min] = temp;
      }
      
   }
}


void bubblesort(int arr[],int n){
   for(int i=0; i<n; i++){
      int swapped=0;
      for(int j=0; j<n-1; j++){
         if(arr[j]>arr[j+1]){
            int temp = arr[j];
            arr[j]= arr[j+1];
            arr[j+1]= temp;
            swapped = 1;
         }
      }
      if(swapped==0) break;
   }
}


void display(int arr[],int n){
   for(int i=0; i<n; i++){
      printf("%d ",arr[i]);
   }
}

int main(){
   int arr[] = {22,11,34,55,23,12,10};
   int n = (sizeof(arr)/sizeof(int));
   
   printf("unsorted array\n");
   display(arr,n);
   bubblesort(arr,n);
   printf("\nsorted array\n");
   display(arr,n);
}