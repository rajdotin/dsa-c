#include<stdio.h>

//brute forcw approch
//time complexity O(n^2)
void brutePairSum(int arr[], int n, int target){
    int sum = 0;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]+arr[j]== target){
                printf("%d at index %d\n",arr[i],i);
                printf("%d at index %d",arr[j],j);
            }
        }    
    }
}




//! by two pointer approch{optimal}
//! time complexity O(n^2)
void optimalPairSum(int arr[], int n, int target){
    int i=0 , j=n-1, pairsum=arr[i]+arr[j];
    for(int k=0; k<n-1; k++){  //! or while(i<j)
        
        if(pairsum==target){
            printf("%d and %d",i,j);
            break;
        }else if(pairsum>target){
            j--;
        }else{
            i++;
        }
    }
}

int main(){
    int arr[] = {2,7,11,15};
    int target = 26;
    int n = sizeof(arr)/sizeof(int);
    //brutePairSum(arr, n, target);
    optimalPairSum(arr, n, target);

}