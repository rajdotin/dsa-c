#include<stdio.h>

void display(int arr[], int size){
    for(int i=0; i<=size-1; i++){
        printf("%d \t",arr[i]);
    }
    printf("\n");
}

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void reverse(int arr[], int size){
    int start = 0;
    int end = size-1;
    while(end>start){
        swap(&arr[start],&arr[end]);
        start++;
        end--;
    }
}

int main(){
    int arr[]= {2,5,12,9,36};
    int size = sizeof(arr)/sizeof(int);
    display(arr,size);
    reverse(arr,size);
    display(arr,size);
    
    return 0;
}