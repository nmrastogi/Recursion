//memoization 
// The general time complexity without memoization is O(2^n) 
#include<stdio.h>
int F[10];//random
int fib(int n)
{
    if(n<=1)
        {
        F[n]=n;
        return n;
        }
    else
    {
        if(F[n-2]==-1)
            F[n-2]=fib(n-2);
        if(F[n-1]==-1)
            F[n-1]=fib(n-1);
        return F[n-2]+F[n-1];
    }
        
    
}

int main()
{
    int n;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    for(int i=0;i<10;i++)
        F[i]=-1;
    printf("%d",fib(n));
}