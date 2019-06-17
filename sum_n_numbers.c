#include<stdio.h>

 int sum(int n)
 {
 if(n==0)
    return 0;
else
    return sum(n-1)+n;
 }


 int main()
 {
 //sum(5);
 printf("%d", sum(5));
return 0;
 }
