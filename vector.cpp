#include<iostream>
#include<vector>
 using namespace std;
 int main()
 {
    vector<int> v1;     //vector v1 of 0 length
    vector<string> {"Anoushka", "Sharma"};
vector<char> cv(5); //character vector

vector<string> v4(3, "Hello");  // hello will be stored in all the three blocks of memory
 cout<<v4[0]<<"\n"<<v4[1]<<endl<<v4[2];
 for(int i=0;i<=4;i++)
 {

     cout<<v4[i]<<endl;

 }
 }

