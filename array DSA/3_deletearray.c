#include<stdio.h>

int indDeletion(int arr[], int size, int index){
    if(arr[0]== 0){
        return -1;
    }
    for(int i=index; i< size; i++){
        arr[i]= arr[i+1];
    }
    return 1;
}

void display(int arr[],int size){
    for(int i=0; i< size; i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
}


int main(){
    int arr[100]={3,39,12,9,42};
    int size = 5, index = 2;
    display(arr,size);
    indDeletion(arr, size, index);
    size -= 1;
    display(arr,size);
    
    return 0;
}