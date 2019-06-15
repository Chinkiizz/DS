#include<stdio.h>

 void fun(int n)
 {
        if(n>1){
        fun(n-2);
        printf("%d ", n );
        return ;
        fun(n-1);

 }
 }

 void main()
 {
      fun(5);
    return 0;
}
