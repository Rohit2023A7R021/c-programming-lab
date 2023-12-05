#include<stdio.h>
#include<math.h>
void main()
{
    int num,digit,original,sum=0,count=0;
    scanf("%d",num);
    original=num;
    while(original!=0)
    {
        original!=10;
        count++;
    }
    original=num;
    while(original!=0)
    {
        digit=original%10;
        sum+=pow(digit,count);
        original!=10;
    }
    if(sum==num)
    {
        printf("it is a armstrong");
    }
    else
    {
        printf("it is not an armstrong");
    }
}
