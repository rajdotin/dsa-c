#include<stdio.h>
#define max(x,y) ((x)>(y)? (x):(y))
#define min(x,y) ((x)<(y)? (x):(y))

int buySellStocks(int prices[], int n){
    int bestbuy = prices[0],maxprofit =0;
    for(int day=1; day<n; day++){
        if(prices[day]>bestbuy){
            maxprofit = max(maxprofit, prices[day]-bestbuy);
        }
        bestbuy = min(bestbuy,prices[day]);
    }
    return maxprofit;
}
int main(){
    int arr[] = {7,1,5,3,6,4};
    int n = sizeof(arr)/sizeof(int);
    int maxprofit = buySellStocks(arr,n);
    printf("%d",maxprofit);
    return 0;
}