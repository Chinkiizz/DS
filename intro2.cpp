#include<iostream>
using namespace std;
int main()
{             int count1=0;
string name;
int i;
cout<<"Enter name";
getline(cin,name);
cout<<"Your name is "<<name;
for( i=0;name[i]!='\0';i++)
{

    if(name[i]!=32)
        count1++;
    else
        continue;
}
    cout<<count1;
return 0;
}
