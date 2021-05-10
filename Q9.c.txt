//Question: https://www.hackerrank.com/challenges/bitwise-operators-in-c/problem

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  //Write your code here.
    int i,j,maxAnd=0,maxOr=0,maxXor=0,max1,max2,max3;
    
    int ar[n];

    for(i=0;i<n;i++){
     ar[i]=i+1;
    }
    
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
max1=ar[i]&ar[j];
max2=ar[i]|ar[j];
max3=ar[i]^ar[j];
if(max1>maxAnd && max1<k){
maxAnd=max1;
}
if(max2>maxOr && max2<k){
maxOr=max2;
}
if(max3>maxXor && max3<k){
maxXor=max3;
}
        }
       
    }
     printf("%d\n%d\n%d",maxAnd,maxOr,maxXor);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
