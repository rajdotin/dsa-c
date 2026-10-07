#include<stdio.h>
#include<limits.h>
#define max(a,b) ((a) > (b) ? (a) : (b))

void printsubarray(int arr[],int n){
    for(int start=0; start<n; start++){
        for(int end=start; end<n; end++){
            for(int i=start; i<=end; i++){
                printf("%d",arr[i]);
            }
            printf(" ");
        }
        printf("\n");
    }
}

// max subarray sum brute force approch
// time comeplexity O(n^2)

void bruteSubarraySum(int arr[], int n){
    int maxsum = INT_MIN;
    for(int start=0; start<n; start++){
        int currsum = 0;
        for(int end=start; end<n; end++){
            currsum += arr[end];
            maxsum = max(currsum,maxsum);
        }
    }
    printf("val of maxsum is: %d", maxsum);
}

//! max subarray sum kadane's algo
//! time complexity O(n) {optimise way}

void kadaneSubarraySum(int arr[], int n){
    int currsum=0, maxsum = INT_MIN;
    for(int start=0; start<n; start++){
        currsum += arr[start];
        maxsum = max(currsum, maxsum);
        if(currsum < 0){
            currsum = 0;
        }
    }
    printf("%d",maxsum);
}

int main(){
    int arr[]={3,-4,5,4,-1,7,-8};
    int n=sizeof(arr)/sizeof(int);
    //printsubarray(arr,n);
    //bruteSubarraySum(arr, n);
    kadaneSubarraySum(arr, n);
    
    return 0;
}