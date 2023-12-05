#include<stdio.h>
void main()
{
    int a,i=2,c=0;
    scanf("%d",&a);
    while(i<=a)
    {
        if(a%i==0)
        {
            c++;
        }
        i++;
    }
    if(c==1)
    {
        printf("it is a prime");
    }
    else
    {
        printf("it is not an prime");
    }
}