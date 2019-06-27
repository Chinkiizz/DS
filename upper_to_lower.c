//change to lowercase character.
//uppercase and lowercase ASCII values have a difference of 32 ex A-65 and a-97
//if string is "Wel5ome" then no change will happen to 5 orat position 3, it will remain 5 only.


#include<stdio.h>
 int main()
 { int i;
 char A[]="WELCOME";
 printf("\n%s\n", A);

 for(i=0;A[i]!='\0';i++)
 {
    if(A[i]>=65 && A[i]<=90)
        A[i]+=32;
    else if(A[i]>='a' && A[i]<=122)
        A[i]-=32;
 }
 printf(" \nFinal string is %s \n", A );
 return 0;}
