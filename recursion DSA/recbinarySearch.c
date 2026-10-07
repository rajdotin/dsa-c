//! 
#include<stdio.h>

int binsearch(int arr[], int low, int high, int x){
   while(low<high){
      int mid = (low+high)/2;
      if(arr[mid]== x){
         return (mid);
      }else if(arr[mid]<x){
         return binsearch(arr, mid+1, high, x);
      }else{
         return binsearch(arr, low, mid-1, x);
      }
   }
   return -1;
}

int main(){
   int arr[] = {1,3,5,7,9,14,23,35,44};
   int low = 0;
   int high = (sizeof(arr)/sizeof(int)) - 1;

   printf("at index %d",binsearch(arr, low, high,5 ));
}