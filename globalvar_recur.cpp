#include<iostream>
 using namespace std;
int x=0;  //global variable
 int fun(int n)
 {

 if(n>0)
 {
     x++;
 return fun(n-1)+x;
 }
 return 0;
 }

 int main()
 {

 int r;
 r=fun(5);
 cout<<endl<<r;


  r=fun(5);
 cout<<endl<<r;
 return 0;}
