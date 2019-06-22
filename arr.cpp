#include<iostream>
using namespace std;
int main()
{
int A[5]={0,1,3,4,2};
int *F;
F=new int[10];
F[0]=9;
for(int i=0;i<5;i++)
{
cout<<endl<<"\t"<<A[i];
}
for(int i=0;i<10;i++)
{

cout<<endl<<"\t"<<F[i];}
delete(F);
return 0;}
