#include <stdio.h>

int main()
{
    printf("姓名：张三\n");
    printf("学号:2021234567\n");
    float er=0,amount=0;
    printf("请输入人民币对美元的汇率:");
    scanf("%f",&er);
    while(1)
    {
        printf("请输入人民币金额:");
        scanf("%f",&amount);
        if(amount<0)
        {
            return 0;
            break;
        }
        else
        {
            printf("￥%.2f==>$%.2f\n",amount,amount*(float)er);
        }
    }
    return 0;
}