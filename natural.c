#include<stdio.h>

  sum(int n)
  {
  if(n==0){
    //printf("Number is not natural no.\n ");
    return 0;}
  //else
    //return sum(n-1)+n;
    return sum(n-1)+n;
  }
int ISum(int n)
{

    int s=0, i;
    for(i=0;i<=n;i++)
        s=s+i;
    return s;

}
  int main()
  {
int r;
//r=sum(4);

 // sum(4);
r=ISum(5);
printf("%d",r);
  return 0;}
