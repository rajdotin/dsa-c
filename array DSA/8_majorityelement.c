#include<stdio.h>

//brute force approch //time comp O(n^2)
int bruteMajorityElement(int arr[], int n){
    int frequency =0;
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            if(arr[i]==arr[j]){
                frequency++;
            }
        }
        if(frequency > n/2){
            return arr[i];
        }
        frequency = 0;
    }
    return -1;
}

//orange sorting is required for 2nd optimal approch //time comp O(nlogn)
void sorting(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap elements
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int optiMajorityElement(int arr[], int n){
    sorting(arr, n);
    int frequency =1, ans = arr[0];
    for(int i=1; i<n; i++){
        if(arr[i]== arr[i-1]){
            frequency ++;
        }else{
            frequency =1,ans =arr[i];
        }
        if(frequency > n/2){
            return ans;
        }
    }
    return -1;
}

//red moore's voting element //time comp O(n)
int mooresMajorityElement(int arr[],int n){
    int freq = 0, ans= 0;
    for(int i=0; i<n; i++){
        if(freq==0){
            ans = arr[i];
        }
        if(arr[i]== ans){
            freq++;
        }else{
            freq--;
        }
    }
    int count =0;
    for(int i=0; i<n; i++){
        if(arr[i]== ans){
            count++;
        }
    }
    if(count > n/2){
        return ans;
    }else{
        return -1;
    }
}

int main(){
    int arr[] = {1,2,2,2,1};
    int n = sizeof(arr)/sizeof(int);
    // int ans = bruteMajorityElement(arr,n);
    // printf("%d",ans);
    //int ans = optiMajorityElement(arr,n);
    int ans = mooresMajorityElement(arr,n);
    printf("%d",ans);
    return 0;
} 