#include <stdio.h>

int main()
{
    int a,b;
    char op;
    printf("请输入四则运算表达式：");
    scanf("%d %c %d",&a,&op,&b);
    if(op=='+')
    {
        printf("%d %c %d = %d",a,op,b,a+b);
    }
    else if(op=='-')
    {
        printf("%d %c %d = %d",a,op,b,a-b);
    }
    else if(op=='*')
    {
        printf("%d %c %d = %d",a,op,b,a*b);
    }
    else if(op=='/')
    {
        printf("%d %c %d = %d",a,op,b,a/b);
    }
    return 0;
}