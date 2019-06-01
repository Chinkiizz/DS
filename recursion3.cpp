#include<iostream>
#include<conio.h>


 using namespace std;
 int factorial(int n)
 {

 if(n==0)
 return 1;

 return n*factorial(n-1);
 }

 int main()
 {

 int x=4;
 cout<<"Factorial of the number "<<x<< " is "<< factorial(4);


 return 0;}
