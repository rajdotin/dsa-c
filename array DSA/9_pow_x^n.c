#include<stdio.h>
long decimalToBinform(int n){
    long binform=0;
    int place=1;
    if(n<0){
        n = -n;
    }
    while(n>0){
        int r = n%2;
        binform = binform+r*place;
        place *= 10;
        n = n/2;
    }
    return binform;
}

double myPow(double x, int n){
    //cyan corner cases.
    if (n==0) return 1.0;
    if(x==0) return 0.0;
    if(x==1) return 1.0;
    if(x==-1 && n%2==0) return 1.0;
    if(x==-1 && n%2!=0) return -1.0;
    
    long binform = decimalToBinform(n);
    if(n < 0){
            x = 1/x;
        }
        double ans=1;
    while(binform > 0){
        if(binform%10 == 1){
            ans *= x;
        }
        x *=x;
        binform /=10;
    }
    return ans;

}

int main(){
    double x=3, n=-5;
    double ans = myPow(x,n);
    printf("%f",ans);
    return 0;
}