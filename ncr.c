#include<stdio.h>
//using pascal triangle

int c(int n,int r)
{
    if(r==0||r==n)
        return 1;
    else
        return c(n-1,r-1)+c(n-1,r);
}

int main()
{
   int n,r;
   printf("Enter the value of n and r: ");
   scanf("%d %d",&n,&r);
   printf("%d\n",c(n,r)); 
}