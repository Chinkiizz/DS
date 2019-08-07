/* anywhere in your code if you need diagonal matrix, then you need a structure to define all its entities like shown below
 no need to store the diagonal matrix in a 2 d array, instead we store it in a 1D array, storing only the non-zero elements.
 */

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
     printf("%d \n", get(m,2,2));
     printf("%d \n", get(m, 3,3));
     Display(m);
 return 0;}
