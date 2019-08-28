//second logic for reversing
#include<iostream>
using namespace std;

int main()
{

int i,j;
int n;
cin>>n;
int A[n];
cout<<"Enter array elements\n";

 for(i=0;i<n;i++)
 {
cin>>A[i];
 }
for(i=0,j=n-1;i<j;i++,j--)
{
   int temp=A[i];
    A[i]=A[j];
    A[j]=temp;

}
for(j=0;j<n;j++)
{

    cout<<A[j];
}
return 0;}
