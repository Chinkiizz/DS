// how to increase the size of a dynamic array.


#include<iostream>
 using namespace std;

 int main()
 {

 int *p=new int[5];
 p[0]=1;
 p[1]=3;
 p[2]=4;
 p[3]=2;
 p[4]=5;
 int *f=new int[10];
 for(int i=0;i<5;i++)
 {
     cout<<endl<<p[i];

 }
 for(int i=0;i<5;i++)
 {


f[i]=p[i];
 }
 delete[]p;
 p=f;
 f=NULL;

 return 0;}
