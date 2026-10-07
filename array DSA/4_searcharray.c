#include<stdio.h>
int linSearch(int arr[], int element, int size){
    for(int i=0; i<=size; i++){
        if(arr[i]== element){
            return printf("At index : %d",i) ;
        }
    }
    return -1;
}

int binSearch(int arr[], int element, int size){
    int low = 0;
    int high = size-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]== element){
            return mid ;
        }else if(arr[mid]<element){
            low = mid+1;
        }else{
            high = mid-1;
        }
    }
    return -1;    
}

int main(){
    int arr[]= {1,5,8,12,24,33,45,77,89,101};
    int size = sizeof(arr)/sizeof(int) , element= 12;
    //linSearch(arr, element, size);
    int searchindex= binSearch(arr, element, size);
    printf("%d",searchindex);
    return 0;
} 