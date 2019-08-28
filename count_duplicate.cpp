#include<iostream>
using namespace std;

int main()
{
int A[]={3,6,8,8,10,12,15,15,15,20};
int i,j;
int n=sizeof(A)/sizeof(A[0]);

for(i=0;i<10;i++)
{
   if(A[i]==A[i+1])
     {
         j= i+1;
         while(A[j]==A[i])
            j++;
     }
    }
    cout<< "Duplicate element "<<A[i]<<"appears "<< j-i<<"times\n";
i=j-1;
return 0;}
