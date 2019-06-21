//fibonacci series 0 1 1 2 3 5 8 13

#include<iostream>
using namespace std;

int fibo(int n)
{   int first=0, sec=1;
int next,i;
for(i=2;i<n;i++)
{
next=first+sec;
first=sec;
sec=next;

//cout<<next;
}
return next;
}

int main()
{
int r;
r=fibo(8);
cout<<r;
return 0;
}
