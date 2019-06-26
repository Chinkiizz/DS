#include<iostream>
 using namespace std;



 int main()
{
int A[50];
int sizee;
int length;
cout<<"Enter size ";
cin>>sizee;
cout<<"\nEnter elements of array\n";
for(int i=0;i<sizee;i++)
{

    cin>>A[i];
}


    int del, index;
    cout<<"\nElement to be deleted is \n";
    cin>>del;

    for(int i=0;i<sizee;i++)
    {

        if(A[i]==del){
            index=i;     cout<<"\nFound element. deleting it\n";
        }
    else
        continue;


    cout<<"\nElement to be deleted is at index\n"<<index;
for(int i=index;i<sizee;i++)
{

    A[i]=A[i+1];
}
sizee--;
cout<<"\nNew array is \n"<<endl;
for(int i=0;i<sizee;i++)
    cout<<endl<<A[i];
    }
return 0;}

