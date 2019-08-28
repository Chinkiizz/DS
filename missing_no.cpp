//first  n natural number

#include<iostream>
using namespace std;
int main()
{
int A[]={1,2,3,4,5,6,8,9,10,11,12};
int sum=0;
for(int i=0;i<11;i++)
{
   sum=sum+A[i];
}
   int s=12*(12+1)/2;
     int x=s-sum;
     cout<<"Missing no. is "<<x;

return 0;}
