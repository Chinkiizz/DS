#include<iostream>
using namespace std;

class Array{
   private:
int size, length;
void swap(int *x , int *y);

public:
Array(){
   size=10;
   length=0;
   A=new int[size];
}
Array(int sz)
{
    size=sz;
    length=0;
    A=new int[size];
}
~Array()
{
    delete[]A;
}
/*
All these functions are members of a class

*/
void Display();
void Append(int x);
void Insert(int index, int x);
int linearsearch(int key);
int binarysearch(int key);
//int rbinsearch();
int get(int index);
void set(int index, int x);
int Max();
int min();
int sum();
floag avg();
void reverse();
void reverse2();
void insertsort(int x);
int isSorted();
void rearrange();
*Array Union(Array *arr2);
*Array Intersection(Array *arr2);
*Array Difference(Array *arr2);
*Array Merge(Array *arr2);

};
 void Array :: Display  ()
 {
 int i;
  cout<<"ELements are \n";
  for(i=0;i<length;i++)
  {
    cout<<A[i];
  }

  void Array:: Append(int x)
  {
          if(length<size)
            A[length++]=x;
        }

void Array:: Insert(int index, int n)
{
    int i;
    if(index>=0 && index<=length)
        {
            for(i=length;i>index;i--)
                A[i]=A[i-1];
            A[index]=x;
            length++;
}
}
void Array::Delete(int index, int n)
{
   int x=0,i;
}
void Array::Rearrange()
{

    int i,j;
    i=0;
    j=length-1;
    while(i<j)
    {
        while(A[i]<0) i++;
        while(A[j]>=0)j--;
        if(i<j) swap(&A[i], &A[j]);
    }
}

   void Array::Merge(Array *arr2)
   {
       int i,j,k;
       i=k=j=0;
       Array *arr3=new Array(length+arr2.length);


   }
 }

int main()
{

return 0;}
