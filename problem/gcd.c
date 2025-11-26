//辗转相除法       除数变被除，余数变除数；余数为零停，除数是答案
// 函数写法  欧几里得算法 gcd
// int gcd (int a ,int b)
// {
//     while(b)
//     {
//         int temp = a % b;
//         a = b;
//         b = temp;
//     }
//     return a ;
// }
// int main()
// {
//     int x,y;
//     scanf("%d %d",&x,&y);
//     int r = gcd(x,y);
//     printf("%d\n",r);
// }

int gcd (int x,int y )
{   
    while(y)
    {
        int temp = y;
        y = x %y;
        x = temp;
    }
    return x;
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int r = gcd (a,b);
    printf("%d\n",r);
    return 0;
}