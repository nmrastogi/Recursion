#include<stdio.h>
int t1=0,t2=1;
fib(int n)
{
    printf("%d %d",t1,t2);
    for(int i=2;i<n;i++)
    {
        int t3=t1+t2;
        t1=t2;
        t2=t3;
        printf(" %d",t3);
    }
    
}
main()
{
    int n;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    fib(n);
    

}