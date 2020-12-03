#include<stdio.h>
int a=1,b=2,c=3;
void toh(int n,int a,int b,int c)
{
    if(n>0)
    {
        toh(n-1,a,c,b);
        printf("\n%d to %d",a,c);
        toh(n-1,b,a,c);
     }

}

int main()
{
    int n;
    printf("Enter the number of disks in Tower of Hanoi: ");
    scanf("%d",&n);
    printf("The steps are: ");
    toh(n,a,b,c);
}