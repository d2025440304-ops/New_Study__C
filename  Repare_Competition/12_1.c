#include <stdio.h>
typedef long long LL;
//思路；用周期做，先看要花多少周，再处理余下的题目，进行 7 天的循环；
int main()
{
    LL a = 0,b = 0,n = 0;
    //输入三个数，周内做作业的数量 a，周末做作业的数量 b，全部的题的数量 n
    if(scanf("%lld %lld %lld",&a,&b,&n) != 3); return 1;

    //周期；
    LL P = 5*a+2*b;

    //计算多少周；
    LL W = (n-1)/P;
    LL totals = W*7;

    //计算余下的题目；
    
    LL R = n - W*P;
    for(int i = 1;i<=7;i++)
    {
        if(i<=5)
        R -=a;
        else
        R -=b;
        if(R<=0)
        {
            totals += i;
            break;
        }

    }
    printf("%lld\n",totals);

}