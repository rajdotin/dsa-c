#include<stdio.h>

void hanoi(int n, int start, int end){
   //! base condition
   if(n==1){
      printf("%d->%d\n",start,end);
   }else{
      int other = 6-(start+end);
      hanoi(n-1,start,other);
      printf("%d->%d\n",start,end);
      hanoi(n-1, other, end);
   }
}

void hanoi2nd(int n, char src, char helper, char dest){
   if(n==1){
      printf("disk %d: %c -> %c \n",n,src,dest);
   }else{
      hanoi2nd(n-1, src, dest, helper);
      printf("disk %d: %c -> %c \n",n,src,dest);
      hanoi2nd(n-1, helper, src, dest);
   }
}
int main(){
   // hanoi(3,1,3);
   hanoi2nd(3,'A','B','C');
}