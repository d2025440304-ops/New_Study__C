#include <stdio.h>
//利用多组输入语句和循环来判断两个数的大小关系
//法一
// int main() 
// {
//    int a = 0;
//    int b = 0;
//    while(scanf("%d %d",&a,&b) !=-1)
//    {
//     if(a<b)
//     {
//         printf("%d<%d\n",a,b);
//     }
//     else if(a==b)
//     {
//         printf("%d=%d\n",a,b);
//     }
//     else
//     {
//         printf("%d>%d",a,b);
//     }
//    }
// return 0;
// }
//法二
// #include <stdio.h>

// int main() 
// {
// int a,b;
// char ch;
// while(scanf("%d %d",&a,&b) !=-1)
// {
//    getchar();
//    if(a<b)
//        ch='<';
//     else if (a==b)
//        ch='=';
//        else
//         ch='>';
//         printf("%d%c%d\n",a,ch,b);
// }
// return 0;
// }
// 判断被5整除的问题
// #include <stdio.h>

// int main() 
// {
//   int a = 0;
//   while(scanf("%d",&a) !=-1)
//   {
//     if(a%5==0)
//     {
//         printf("YES\n");
//     }
//     else 
//     {
//         printf("NO\n");
//     }
//   }
//   return 0;
// }
// int main()
// {
//    int i;
//    for(i=1;i<=100;i++)
//    {
//       if(i %3 == 0)
//       {
//          printf("%d ",i);
//       }
//    }
//    return 0;
// }
// int main()
// {
//    int a,b,c;
//    scanf("%d %d %d",&a,&b,&c);
//    if(a>b && b>c)
//    {
//       printf("%d %d %d",a,b,c);
//       printf("\n");
//    }
//    else if(a>b && c>b)
//    {
//       printf("%d %d %d",a,c,b);
//       printf("\n");
//    }
//    else if(b>a && a>c)
//    {
//       printf("%d %d %d",b,a,c);
//       printf("\n");
//    }
//    else if(b>a && c>a)
//    {
//       printf("%d %d %d",b,c,a);
//       printf("\n");
//    }
//    else if(c>a && a>b)
//    {
//       printf("%d %d %d",c,a,b);
//       printf("\n");
//    }
//    else if (c>a && b>a)
//    {
//       printf("%d %d %d",c,b,a);
//       printf("\n");
//    }
//    return 0;
// }
