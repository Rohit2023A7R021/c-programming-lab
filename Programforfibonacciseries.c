#include<stdio.h>
void main()
{
    int i,n,t1=0,t2=1,nextterm;
    printf("enter the number of term");
    scanf("%d",&n);
    printf("fibonacci series :%d\n%d\n",t1,t2);
    for(i=3;i<=n;i++)
    {
        nextterm=t1+t2;
        printf("%d\n",nextterm);
        t1=t2;
        t2=nextterm;
    }
}