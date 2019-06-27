#include<stdio.h>
 int main()
 { int i,j;
 char A[10], B[10];
 printf("Enter the string\n");
 gets(A);
 for(i=0;A[i]!='\0';i++)
 {
 }
i-=1;
for(j=0;i>=0;i--,j++)
{
    B[j]=A[i];
}
B[j]='\0';
printf("Resversed string is %s", B);

 return 0;}
