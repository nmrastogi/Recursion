#include<stdio.h>


int sumofnum(int a)
{
    if(a!=0)
        return a+sumofnum(a-1);
    else
        return a;

}

int main()
{
    int n;
    printf("Enter the sum of natural numbers: ");
    scanf("%d",&n);
    sumofnum(n);
    printf("The sum of numbers is:%d", sumofnum(n));





}
