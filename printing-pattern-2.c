//Question: https://www.hackerrank.com/challenges/printing-pattern-2/problem

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n,i,j;
    scanf("%d", &n);
  	// Complete the code to print the pattern.
   for(i=n;i>0;i--){

    for(j=n;j>0;j--){
if(j>i)
printf("%d ",j);
else printf("%d ",i);
    }

    for(j=2;j<=n;j++){
        if(j>i)
        printf("%d ",j);
        else printf("%d ",i);
            }
            printf("\n");
    
}
for(i=2;i<=n;i++){

    for(j=n;j>0;j--){
        if(j>i)
        printf("%d ",j);
        else printf("%d ",i);
    }

    for(j=2;j<=n;j++){
        if(j>i)
        printf("%d ",j);
        else printf("%d ",i);
            }
            printf("\n");
    }
    return 0;
}