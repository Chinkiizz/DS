what is Recursion?
 Recursion is a function calling itself for use.
Look at this example for understanding...
void fun(int n)
{
if(n>0)
{
printf("%d",n);
fun(n-1);
}
}
void main()
{
int x=3;
fun(x);
}


int add(int a,int b)
{
int c;
c=a+b;
}
void main()
{
int x=10,y=20;
return 0;
}



Note: There must be a base condition to make a recursion stop.

Comparison between recursion and loops?
Loops are repeating statements while recursions are also repeating although they have two stages in it:
1. Calling stage
2. Returning stage
