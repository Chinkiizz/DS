#include<stdio.h>
  int main()
  {
  int n,s=0;
  int i;
  printf("Enter val of n");
  scanf("%d", n);

  for(i=1;i<n;i++)
  {
  s=s+i;
  printf("%d", s);
  }
    printf("%d", s);

  return 0;}
