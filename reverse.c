#include<stdio.h>
 int main()
 { int i,j;
 char name[]="Python";
 char B[7];
 for(i=0;name[i]!='\0';i++)
 {
}
i=i-1;
for(j=0;i>=0;i--,j++)
{   B[j]=name[i];
}
B[j]='\0';
printf("reversed form of string is %s", B);
 return 0;}
