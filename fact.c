#include<stdio.h>
/*
int fact(int n)
{
    if (n==0)
        return 1;
    return fact(n-1)*n;

}
*/

int loop(int n)
{
int i,m=1;
for(i=1;i<=n;i++)
{
m=m*i;

}
return m;
}
int main()
{
int f;
f=loop(5);
printf("%d",f);

}
