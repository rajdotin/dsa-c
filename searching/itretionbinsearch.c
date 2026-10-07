#include <stdio.h>

void binsearch(int arr[], int n, int x){
   int low = 0, high = n-1;
   while(low<=high){
      int mid = (low+high)/2;
      if(arr[mid]== x){
         printf("element found at index %d.\n",mid);
         break;
      }else if(arr[mid]<x){
         low = mid+1;
      }else{
         high = mid-1;
      } 
   }
}

int main() {
   int arr[]= {12,34,22,5,8,12,3};
   int n = sizeof(arr)/sizeof(int);
   binsearch(arr,n,5);
   return 0;
}