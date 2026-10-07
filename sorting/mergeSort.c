#include <stdio.h>

void merge(int arr[], int p, int q, int r){
   int n1=q-p+1, n2=r-q;
   int L[n1], R[n2];
   for(int i=0; i<n1; i++) L[i] = arr[p+i];
   for(int j=0; j<n2; j++) R[j] = arr[q+1+j];
   int i,j,k;
   i=0,j=0,k=p;
   while(i<n1 && j<n2){
      if(L[i]<=R[j]){
         arr[k] = L[i];
         i++;
         k++;
      }else{
         arr[k] = R[j];
         j++;
         k++;
      }
   }
   while(i<n1){
      arr[k]= L[i];
      i++;k++;
   }
   while(j<n2){
      arr[k]= R[j]; 
      j++;k++;
   }
}

void mergesort(int arr[],int p, int r){
   if(p<r){
      int q = (p+r)/2;
      mergesort(arr,p,q);
      mergesort(arr,q+1,r);
      merge(arr,p,q,r);
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
   int p=0, r=n-1;
   mergesort(arr,p,r);
   display(arr,n);
}