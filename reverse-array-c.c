//Question: https://www.hackerrank.com/challenges/reverse-array-c/problem

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }

for(i=num-1;i>=0;i--){
    printf("%d ",*(arr + i));
}
    /* Write the logic to reverse the array. */

   
    return 0;
}