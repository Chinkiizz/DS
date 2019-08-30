#include<iostream>
using namespace std;
toUpper(string a)
{ for(int i=0;a[i]!='\0';i++)
 { if(a[i]>=65 && a[i]<=90)
        a[i]+=32;
    else if(a[i]>='a' && a[i]<=122)
        a[i]-=32; } cout<<a;}
int main()
{ string s;
cout<<"Enter a string\n";
getline(cin,s);
toUpper(s);
return 0;}
