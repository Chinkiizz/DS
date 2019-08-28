#include<iostream>
 using namespace std;


  int main()
 {
 int A[50];
 cout<<"Enter size of array\n";
 cin>>size;
 for(int i=0;i<size;i++)
    cout<<"Enter element in array";
    cin>>A[i];

int del, index;
cout<<"Enter element to be deleted\n";
cin>>del;
cout<<"Enter index of element";
cin>>index;
for(i=0;i<size;i++)
{
if(A[i]==del)
{

for(i=index;i<length-1;i++)
{

A[i]=A[i+1];

}
size++;
}

}

 return 0;}
