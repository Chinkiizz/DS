#include<iostream>
using namespace std;
int main()
{
int  i;
int n;
cout<<"Enter size";
cin>>n;
      int A[n];
j=n-1;
for(i=0;i<n;i++)
{
cin>>A[i];
}
    while(i<j)
    {
        while(A[i]<0)
        {
            i++;
        }
        while(A[j]>0)
        {

            j--;
        }
        if(i<j)
        {
            swap(A[i], A[j]);
        }
}

return 0;}
