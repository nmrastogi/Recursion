#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *p,*q;
    p=(int *)malloc(5*sizeof(int));
    p[0]=11,p[1]=22,p[2]=33,p[3]=44,p[4]=55;
    for(int i=0;i<5;i++)
     {
        printf("%d ",p[i]);
     }
    printf("\n");
    q=(int *)malloc(10*sizeof(int));
    printf("after allocation:");
     for(int i=0;i<5;i++)
     {
         q[i]=p[i];
     }
     free(p);
     p=q;
     q=NULL;
     for(int i=0;i<5;i++)
        printf("%d ",p[i]);

}