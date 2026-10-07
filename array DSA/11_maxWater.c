#include<stdio.h>
#define min(x,y) ((x) < (y)? (x):(y))
#define max(x,y) ((x) > (y)? (x):(y))

void brutemostWater(int heights[],int n){
    int maxwater = 0;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            int height = min(heights[i],heights[j]);
            int width = j-i;
            int currwater = height * width;
            maxwater = max(maxwater,currwater);
        }
    }
    printf("%d\n",maxwater);
}


//! optimal approch using 2 ptr approch 
//! time comp O(n)
void optimalMostWater(int arr[], int n){
    int start =0, end = n-1;
    int maxwater= 0;
    while(start<end){
        int height = min(arr[start],arr[end]);
        int width = end-start;
        int currwater = height* width;
        maxwater = max(maxwater, currwater);
        if(arr[start]>arr[end]){
            end--;
        }else{
            start++;
        }
    }
    printf("%d\n",maxwater);
}


int main(){
    int heights[] = {1,8,6,2,5,4,8,3,7};
    int size = sizeof(heights)/sizeof(int);
    //mostWaterCon(heights,size);
    optimalMostWater(heights,size);

}