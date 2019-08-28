//check if list is already sorted or not
#include<iostream>
 using namespace std;
 int isSorted(int A[],int x)
 {      int i;          int count=0;
    for(i=0;i<x-1;i++)
    {
        if(A[i]>A[i+1])
          count++;
        else
            continue;

    }
    if (count==x)
    {

       cout<<"Sorted";
    }
    }
 int main()
 {
     int n,i;
     cin>>n;
     int B[n];
 for(i=0;i<n;i++)
 {
cin>>B[i];
 }

isSorted(B,n);
}
