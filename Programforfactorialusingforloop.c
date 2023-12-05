#include<stdio.h>
void main()
{
    int i,n,fact=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d\n",i);
        fact*=i;
    }
    printf("factorial of a given number is :%d",fact);
    return 0;
}