//Program to reverse a string without using another array method 2
#include<stdio.h>
 int main()
 { int i,j;
 char A[]="Python";
 for(j=0;A[j]!='\0';j++)
 {
 }j=j-1;
 for(i=0;i<j;i++,j--)
 {
    int t;
     t=A[i];
     A[i]=A[j];
     A[j]=t;
 }
 printf("The reversed string  is %s ", A);
 return 0;}
