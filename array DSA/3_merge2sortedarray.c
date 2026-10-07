#include<stdio.h>
int *merge(int arr1[],int arr2[], int n1, int n2, int arr3[]){
   int i=0,j=0,k=0;
   while(i<n1 && j<n2){
      if(arr1[i]<arr2[j]){
         arr3[k] = arr1[i];
         i++,k++;
      }else{
         arr3[k] = arr2[j];
         j++,k++;
      }
   }
   while(i<n1){
      arr3[k] = arr1[i];
      i++,k++;
   }
   while(j<n2){
      arr3[k] = arr2[j];
      j++,k++;
   }
   return arr3; //returning pointer arr3[0]
}

int main(){
   int arr1[] = {2,5,7,9,12};
   int arr2[] = {1,4,8,11};
   int n1= sizeof(arr1)/sizeof(int);
   int n2= sizeof(arr2)/sizeof(int);
   int n3 = n1 + n2;
   int arr3[n3];

   int *mergedArray = merge(arr1,arr2,n1,n2,arr3);

   printf("merged array:\n");
   for(int i=0; i<n3; i++){
      printf("element %d is = %d \n",i,mergedArray[i]);
   }
   return 0;
}