#include<iostream>
using namespace std;

int main()
{  int i,n;
int key;

                     cout<<"Enter array size";
                     cin>>n;
                     cout<<"\nEnter array elements\n ";
                      int A[n];
                     for(i=0;i<n;i++)
                     {

                         cin>>A[i];
                     }

         cout<<"Enter key element\n";
         cin>>key;

         for(i=0;i<7;i++)
         {
                 if(A[i]==key)
                    cout<<"found at \n"<<i;
                else

                    continue;

         }

return 0;}
