#include<stdio.h>

void display(int arr[],int size){
    for(int i=0; i< size; i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
}
    
int indinsertion(int arr[], int capacity, int size, int index, int element){
    if(size>=capacity){
        return -1;
    }
    for(int i=size-1; i>=index; i--){
        arr[i+1]= arr[i];
    }
    arr[index] = element;
    return 1;
}


int main(){
    int arr[100]={3,39,12,9,42};
    int size = 5, element = 22, index = 3;
    display(arr,size);
    indinsertion(arr,100, size, index, element);
    size += 1;
    display(arr,size);
    
    return 0;
}