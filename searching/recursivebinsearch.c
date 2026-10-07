#include <stdio.h>

int binsearch(int arr[], int low,int high, int x){
   if(low<=high){
      int mid = (low+high)/2;
      if(arr[mid]== x){
         return mid;
      }else if(arr[mid]<x){
         return binsearch(arr,mid+1,high,x);
      }else{
         return binsearch(arr,low,mid-1,x);
      } 
   }else{
      return -1;
   }
}

int main() {
   int arr[]= {12,34,22,5,8,12,3};
   int n = sizeof(arr)/sizeof(int);
   int low = 0, high = n-1;
   int result = binsearch(arr,low,high,12);
   if(result == -1){
      printf("element not found ");
   }else{
      printf("element found at index %d.\n",result);
   }
   return 0;
}