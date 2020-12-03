#include<stdio.h>

int fact(int i)
{
    if(i>0)
        return i*fact(i-1);
    else
        return 1;
}

int main()
{
   int n;
   printf("Enter the factorial: ");
   scanf("%d",&n);
   fact(n);
   printf("The factorial is %d is:%li",n,fact(n)); 
}