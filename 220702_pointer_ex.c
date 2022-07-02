// This code is to exchange the order of an array.

#include<stdio.h>

int main()
{
    void inv(int *x,int n);
    int a[11]={4,3,7,9,11,0,6,7,5,4,2};
    printf("The original array:\n");
    for(int i=0;i<11;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    inv(a,11);
    printf("The array has been inverted:\n");
    for (int i = 0; i < 11; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    return 0;
}

void inv(int *x,int n)
{
    int temp,i=0,j=n-1;
    while(i<j)
    {
        temp=x[i]; x[i]=x[j]; x[j]=temp;
        i++;
        j--;
    }
}