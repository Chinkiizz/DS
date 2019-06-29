#include<iostream>
#include<vector>
 using namespace std;
 int main()
 {
    vector<int> v1;
    cout<<"Current capacity is "<<v1.capacity()<<endl;
   v1.push_back(10);
  cout<<"Current capacity is "<<v1.capacity()<<endl;

   v1.push_back(20);
   cout<<"Current capacity is "<<v1.capacity()<<endl;
  v1.push_back(30);

cout<<"Current capacity is "<<v1.capacity()<<endl;
v1.pop_back(30);
    return 0;
    }
