//Question: https://www.hackerrank.com/challenges/recursion-in-c/problem

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int find_nth_term(int n, int a, int b, int c);
//Complete the following function.

int find_nth_term(int n, int a, int b, int c) {
    int res;
    if (n==1)
    return 1;
    else if(n==2)
    return 2;
   else if(n==3)
    return 3;
    else{
        res=find_nth_term(n-1,a,b,c)+find_nth_term(n-2,a,b,c)+find_nth_term(n-3,a,b,c);
       
    }

 return res ;

}

int main() {
    int n, a, b, c;
  
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);
 
    printf("%d", ans); 
    return 0;
}
