#include<stdio.h>
void main()
{
    int n,max=0;
    printf("enter the number");
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    {
        printf("enter the value%d",i);
        int value;
        scanf("%d",&value);
        if(value>max)
        {
            max=value;
        }
    }
    printf("the maximum value is :%d\n",max);
}