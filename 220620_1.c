#include<stdio.h>
#include<math.h>

int main()
{
    int N=676;
    int istwo(int n);
    printf("%d\n",istwo(N));
    return 0;
}

int istwo(int n)
{
    int number[10]={0};
    int i=9;
    int initial=pow(10,i);
    while(n/initial==0)
    {
        i--;
        initial=pow(10,i);
    }
    for(int j=i;j>=0;j--)
    {
        initial=pow(10,j);
        number[n/initial]++;
        n=n-(n/initial)*initial;
    }
    for(int j=0;j<10;j++)
    {
        if(number[j]>=2)
        {
            return 1;
            break;
        }
    }
    return 0;
}