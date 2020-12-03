#include<stdio.h>


double e(int x,int n)
{
    static double p=1,f=1;
    double r;
    if(n==0)
        return 1;
    
    r=e(x,n-1);
    p=p*x;
    f=f*n;
    return r+p/f; 
}
int main()
{
    int x,n;
    printf("What is the value and power of : ");
    scanf("%d %d",&x,&n);
    printf("\n%lf",e(x,n));
}