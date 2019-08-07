#include<stdio.h>
struct diagmatrix{
    int A[10];
    int n;
};
void set(struct diagmatrix *m, int i, int j, int x)
{
    if(i==j)
    {
        m->A[i-1]=x;
    }
}
int get(struct diagmatrix m, int i, int j){
    if(i==j)
        return m.A[i-1];
    else
        return 0;
}
void Display(struct diagmatrix m ){
    int i,j;
    for(i=0;i<m.n;i++)
    {
        for(j=0;j<m.n;j++)
        {
            if(i==j)
                printf("%d", m.A[i]);
            else
                printf("0");
        }
        printf("\n");
    }
}
 int main()
 {
     struct diagmatrix m;
    m.n=4;
     set(&m, 1,1,5);
     set(&m, 2,2,8);
     set(&m, 3,3,9);
     set(&m, 4,4,12);
     Display(m);
 return 0;}
