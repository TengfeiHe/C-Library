#include <stdio.h>
#include <math.h>
int Count_Digit ( const int N, const int D );

int main()
{
    int N, D;
    
    scanf("%d %d", &N, &D);
    printf("%d\n", Count_Digit(N, D));
    return 0;
}

/* 你的代码将被嵌在这里 */
int Count_Digit(const int N,const int D)
{
    int n=0;
    int number[10]={0};
    if(N>0)
        n=N;
    else
    {
        if(N<0)
            n=-N;
        else
            number[0]=1;
            return number[D];
    }
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
    return number[D];
}