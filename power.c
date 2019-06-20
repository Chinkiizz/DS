#include<stdio.h>

 int exponent(int m, int n)

 {
 if(n==0)
    return 1;
return exponent(m,n-1)*m;
 }


 int main()
 { int f;
 f=exponent(2,9);
printf("%d",f);
 return 0;}



