//Faster version to calculaate power function.
#include<stdio.h>

int pow(int m, int n)
{
if(n==0)
    return 1;
if(n%2==0)
    return pow(m*m, n/2);
else
    return m*pow(m*m, (n-1)/2);


}
int main(){
int d;
d=pow(2,9);
printf("%d",d);

return 0;}
