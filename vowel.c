#include<stdio.h>
int main()
{
    char x;
    printf("enter the character");
    scanf("%c",&x);
    if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u'||x=='A'||x=='E'||x=='I'||x=='O'||x=='U')
    {
        printf("it is vowel");
    }
    else
    {
        printf("it is consonant");
    }
    return 0;
}