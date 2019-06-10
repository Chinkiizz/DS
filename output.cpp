//this is a code to show that local scope has higher precedence than outer scope

//If we declare the value of a as static and as global, it gets stored in the bss of the memory hence
//redeclaration is not possible.



#include<iostream>
 using namespace std;
  static int a=1;
 int main()
 {
int a;
cout<<a;     // this produces an output of a random garbage value.
//we learn from this that inner scope is preferred than outer one.
 return 0;
 }
