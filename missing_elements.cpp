#include<iostream>
using namespace std;

int main()
{ int *H=NULL;
  H=new int[13];
  int i;
  int A[]={3,7,4,9,12,6,1,11,2,10};

  for(int i=0;i<10;i++)
  {
    H[A[i]]++;
  }

  for(i=0;i<12;i++)
  {
    H[i]=0;
  }
   int l=1;
   int h=12;
  for(i=l;i<=h;i++)
  {
     if(H[i]==0)
     cout<<endl<<i;
  }

return 0;}
