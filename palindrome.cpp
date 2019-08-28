#include<iostream>
using namespace std;
int main()
{
    int A[]={5,4,2,0,2,5,7,8};
          int i,j;
          int count1=0;
     int n=sizeof(A)/sizeof(A[0]);
          for(i=0,j=n-1;i<n/2;i++,j--)
          {
                        if(A[i]!=A[j])
                            break;

          }
          if (i==n/2)
                cout<<"Palindrome";
                        else
                            cout<<"not";

    return 0;
}
