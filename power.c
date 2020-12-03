#include<stdio.h>

long int pow(int m,int n)
{
    if(n==0)
        return 1;
    else if(n%2==0)
        return pow(m*m,n/2);
    else 
        return m*pow(m*m,(n-1)/2); 

} 


int main()
{
    int m,n;
    printf("Enter the number and its power: ");
    scanf("%d %d",&m,&n);
    long int c=pow(m,n);
    printf("The answer is: %d",c);
    
}