#include <stdio.h>
#include <stdlib.h>
//! should be sorted array
void seqsearch(int arr[], int n, int x){
   int elems[20],indices[20],set=0,found=0;
   int i=0,j=0,start,end;

   for (i=0; i<n; i+=3){
      elems[j] = arr[i];
      indices[j] = i;
      j++;
   }
   if(x < elems[0]){
      printf("nahi hai");
      exit(0);
   }
   for(i=1; i<=j; i++){
      if(x<=elems[i]){
         start = indices[i-1];
         end = indices[i];
         set = 1;
         break;
      }
   }
   if(set==0){
      start = indices[i-1];
      end = n-1;
   }
   for(i=start; i<=end; i++){
      if(arr[i] == x){
         found =1;
         break;
      }
   }
   if(found==1){
      printf("elem found\n");
   }else{
      printf("elem not found\n");
   }
}

int main() {
   int arr[]= {2,5,6,8,12,33,45};
   int n = sizeof(arr)/sizeof(int);
   seqsearch(arr,n,3);
   return 0;
}