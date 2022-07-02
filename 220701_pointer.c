#include<stdio.h>

int main()
{
    void bubble_sort(int *a);
    void select_sort(int *a);
    void select1_sort(int *a);
    int a[10],*p;
    printf("请输入10个整数\n");
    for (p=a; p<a+10; p++)
    {
        scanf("%d",p);
    }
    select1_sort(a);
    for (p=a; p<a+10; p++)
    {
        printf("%d ",*p);
    }
    printf("\n");
    return 0;
}

void bubble_sort(int *a)
{
    int temp;
    for (int i=0;i<9;i++)
    {
        for(int j=0;j<9-i;j++)
        {
            if(a[j]>=a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}

void select_sort(int *a)
{
    int temp;
    for(int i=0;i<9;i++)
    {
        for (int j=i+1;j<10;j++)  
        {
            if(a[j]<a[i])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
}

void select1_sort(int *a)
{
    int temp,k;
    for(int i=0;i<9;i++)
    {
        k=i;
        for(int j=i+1;j<10;j++)
        {
            if(a[j]<a[k])   k=j;
        }
        if(k!=i)
        {
            temp=a[k]; a[k]=a[i]; a[i]=temp;
        }
    }
}