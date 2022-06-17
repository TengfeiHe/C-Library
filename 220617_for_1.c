#include<stdio.h>

int main()
{
    int a = 0,b = 0,sum = 0;
    for(int i=0;i<3;i++) 
    {
        printf("请输入两个整数：\n");
        scanf("%d %d",&a,&b);
        sum=a+b;
        printf("sum = %d\n",sum);
    } 

    return 0;
}