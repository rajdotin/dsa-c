//!Question! You want the optimized O(n) solution without using the division operator

#include<stdio.h>

//orange brute force approch.
//orange time comp On^2()
void bruteproductExceptSelf(int arr[], int size , int result[]){
    for(int i=0; i<size; i++){
        int product=1;
        for(int j=0; j<size; j++){
            if(i!=j){
                product *= arr[j];
            }
        }
        result[i]=product;
    }
}

//green optimal approch  and time comp O(n) 
//green but here space comp O(n) due to prefix[n] & suffix[n];
void optimal_1_ProductExceptSelf(int arr[], int n, int result[]){
    int prefix[n], suffix[n];
    prefix[0]= 1; //for leftproduct of index
    suffix[n-1]= 1; //for rightproduct of index
    //orange calculating prefixproduct ex:[1,2,3,4]--> [1,1,2,6].  
    for(int i=1; i<n; i++){
        prefix[i] = prefix[i-1]*arr[i-1];                                      
    }
    //orange calculating suffixproduct ex:[1,2,3,4]--> [24,12,4,1].
    for(int i=n-2; i>=0; i--){
        suffix[i] = suffix[i+1]*arr[i+1];                                      
    }
    for(int i=0; i<n; i++){
        result[i] = prefix[i]*suffix[i];
    }  
}

//! optimal approch  and time comp O(n) 
//! but here space comp O(1) 
void optimal_2_ProductExceptSelf(int arr[], int n, int result[]){
    result[0]= 1; //for leftproduct of index
    int suffix = 1; //for rightproduct of index
    for(int i=1; i<n; i++){
        result[i] = result[i-1]*arr[i-1];                                      
    }
    for(int i=n-2; i>=0; i--){
        suffix *= arr[i+1];
        result[i] *= suffix;
    }
}

int main(){
    int arr[] = {1,2,3,4};
    int size = sizeof(arr)/sizeof(int);
    int result[size];
    //productExceptSelf(arr,size,result);
    //optimal_1_ProductExceptSelf(arr, size, result);
    optimal_2_ProductExceptSelf(arr, size, result);
    for(int i =0; i<size; i++){
        printf("%d ",result[i]);
    }
    return 0;
}