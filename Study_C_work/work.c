//三角形判断
#include <stdio.h>
// int main()
// {
// int a,b,c;
// int flag ;
//  while(scanf("%d %d %d",&a,&b,&c) != -1)
// {
//    int flag = 0;
//    if(a+b>c && b+c>a && a+c>b)
//    {
//     flag = 1;
//    }
//    if(flag == 1)
//    {
//          if(a==b && b==c)
//         {
//         printf("Equilateral triangle!\n");
//         }
//           else if(a==b || b==c || a==c)
//         {
//             printf("Isosceles triangle!\n");
//         }
//         else 
//         {
//             printf("Ordinary triangle!\n");
//         }
//    }
//    else
//    {
//        printf("Not a triangle!\n");
//    }
// }
// return 0;
// }
// int main()
// {
//     int a,b,c;
//     scanf("%d %d %d",&a,&b,&c);
//     if(a<b)
//     {
//         int temp = b;
//         b = a;
//         a =temp;
//     }//a>=b
//     if(a<c)
//     {
//         int temp = c;
//         c = a;
//         a = temp;
//     }//a>=c
//     if(b<c)
//     {
//          int temp = c;
//          c = b;
//          b = temp;
//     }//b>=c
//     printf("%d %d %d\n",a,b,c);
// }
// int main()
// {
//     int i ;
//     for(i = 1;i <= 9;i++)
//     {
//         int j ;
//         for(j = 1;j <=i;j++)
//         {
//             printf("%d*%d=%-4d",j,i,i*j);
//         }
//         printf("\n");
//     }
//     return 0;
// }
//分数求和，定义flag让计算变号
// int main()
// {
//    int flag = 1;
//    double sum = 0;
//    int i ;
//    for(i = 1;i<=100;i++)
//    {
//       sum = sum + 1.0/i*flag;//浮点数除法
//       flag = -flag;      
//    }
//    printf("%lf\n",sum);
//    return 0;
// }
// int main()
// {
//     int cnt = 0;
//    int i ;
//    for(i=1;i<=100;i++)
//    {
//        if(i %10 == 9)
//        {
//           cnt++;
//        }
//         if(i /10 == 9)
//        {
//           cnt++;
//        }
//    }
//    printf("%d",cnt);
//    return 0;
// }
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
// int main()
// {
//     int a,b;
//     scanf("%d %d",&a,&b);
//     int c = a % b;
//     while(c != 0)
//     {
//         a = b;
//         b = c;
//         c = a % b;
//     }
//     printf("%d\n",b);
//     return 0;
// }
// #include <math.h>
// #include <stdio.h>
// int main()
// {
//     int a = 0 ; 
//     int arr [10] = {0,12,25,65,45,42,78,54,65,21};
//     int max=arr[0];
//     for(int i = 1; i < sizeof(arr)/sizeof(arr[0]) ; i++)
//     {
//         max=fmax(max,arr[i]);
//     }
//     printf("%d",max);
//      return 0;
// }
// int main()
// { 
//     int arr [10] = {0,12,25,65,45,42,78,54,65,21};
//     int max=arr[0];
//     for(int i = 1; i < sizeof(arr)/sizeof(arr[0]) ; i++)
//     {
//         if(max<arr[i])
//         {
//             max = arr[i] ;
//         }
//     }
//     printf("%d",max);
//      return 0;
// }

int Max(int max)
{
    int x;
    for(int i = 0;i<5;i++)
    {
        scanf("%d",&x);
        if(x>max)
        {
            max = x;
        }
    }
    return max;
}

int main()
{
    int a,max;
    scanf("%d",&max);
    int r = Max(max);
    printf("%d\n",r);
    return 0;
}
