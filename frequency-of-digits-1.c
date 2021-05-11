//Question: https://www.hackerrank.com/challenges/frequency-of-digits-1/problem

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
        char s[1000];
    int arr[1000],i,n, count[10];
    int count0=0,count1=0,count2=0,count3=0,count4=0,count5=0,count6=0,count7=0,count8=0,count9=0;

    
    gets(s);
for(i=0;s[i]!='\0';i++){
if(s[i]==48){
    count0++;
}else if(s[i]==49){
count1++;
}
else if(s[i]==50){
count2++;
}
else if(s[i]==51){
count3++;
}
else if(s[i]==52){
count4++;
}
else if(s[i]==53){
count5++;
}
else if(s[i]==54){
count6++;
}
else if(s[i]==55){
count7++;
}
else if(s[i]==56){
count8++;
}
else if(s[i]==57){
count9++;
}else continue;

}
count[0]=count0;
count[1]=count1;
count[2]=count2;
count[3]=count3;
count[4]=count4;
count[5]=count5;
count[6]=count6;
count[7]=count7;
count[8]=count8;
count[9]=count9;

for(i=0;i<10;i++){
printf("%d ",count[i]);
}
    return 0;
}
