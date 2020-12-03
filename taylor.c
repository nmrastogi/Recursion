#include<stdio.h>
double e(int x,int n)
{
    double r=1;
    double num=1;
    double den=1;
    for(int i=1;i<=n;i++)
    {
        num=num*x;
        den=den*i;
        r=r+num/den;
    }
    return r;
}

int main()
{
    int x,n;
    printf("Enter the value(x) and number of terms(n): ");
    scanf("%d %d",&x,&n);
    printf("The answer is : %lf",e(x,n));
}