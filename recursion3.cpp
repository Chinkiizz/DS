//this is an example o infinite loop using recursion
//If we initialise j=50 it wil always return a string "something" will be printed and
return 0 will never be reached.


#include<iostream>
 #include<conio.h>
  using namespace std;

  int f(int j)
  {
  static int i=50;
  int k;
  if(i==j)
  {
  cout<<"\nSomething\n";
  k=f(i);
  return 0;

  }
  else return 0;

  }
  int main()
  {
  cout<<"Hi";

  f(50);

  getch();
  }
