//unordered sequence and find missing number

#include<iostream>
using namespace std;
int main()
{

int A[]={6,7,8,9,10,11,13,14,15,16,17};
  int diff=A[0]-0;
  for(int i=0;i<11;i++)
  {
    if(A[i]-i!=diff)
    {
    cout<<i+diff;
    break;
    }
  }
return 0;}
