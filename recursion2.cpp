#include<iostream>
 #include<conio.h>
 using namespace std;



 //using recursion

void funny(int n){
if(n>-20)
{
cout<<endl<<n;
funny(n-1);
}

}
int main()
{
int x=10;
funny(x);
return 0;
}
