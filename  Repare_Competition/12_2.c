// #include <stdio.h>
// typedef long long LL;
// int main()
// {
//     LL a = 0,b = 0,n = 0;

//     if(scanf("%d %d %d",&a,&b,&n) != 3) 
//         return 1;
//     //一周能做的题
//     LL P = 5*a+2*b;
//     //要花多少周
//     LL W = (n-1)/P;
//     LL totals = W*7;
//     //还剩r 道题，一定能在一周内写完
//     LL R = n-W*P;
    
//     for(int i = 1;i<= 7;i++)
//     {
//         if(i<=5)
//         {
//             R -= a;
//         }
//         else 
//         {
//             R -= b;
//         }
//         totals += i;
//     }
//     printf("%d\n",totals);
//     return 0;
// }

#include <stdio.h>
//按照 p 进制打印,如果要打印一个数的 p 进制，用递归，递归的结束是这个数是 0，打印 p 进制，应该先让这个数除以 p，先打印商数，再打印余数，而余数取模余数还是余数，
void func(int m,int p)
{
    if(m==0) return ;
    //25 4
    //6 4
    //1 4
    //0 4
    //6 4
    //1 4
    func(m/p,p);
    
    int x = m%p; 
    if(x<10)
    printf("%d",x);
    else
    printf("%c",'A'+x-10);
}
int main()
{
    int p = 0;
    if(scanf("%d",&p) != 1)
    return 1;

    for(int i = 0;i<p;i++)
    {
        for(int j = 0;j<=i;j++)
        {
            if(i<10)
            printf("%d",i);
            else 
            printf("%c",'A'+i-10);

            printf("*");

            if(j<10)
            printf("%d",j);
            else 
            printf("%c",'A'+j-10);

            printf("=");

            int m = i*j;

            func(m,p);

            printf(" ");
        }
        printf("\n");
    }
    return 0;
}