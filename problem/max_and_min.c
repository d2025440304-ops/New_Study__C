//用同一个值初始化最大和最小值
//用输入来初始化，避免出现初始化为0，但输入的都是负数，从而导致结果错位
#include <stdio.h>
// int main()
// {
//     int a,min,max;
//     scanf("%d",&a);
//     min = a;
//     max = a;
//     for(int i = 1;i< 10;i++)
//     {
//         scanf("%d",&a);
//         if(min>a)
//         {
//            min = a;
//         }
//         if(max<a)
//         {
//             max = a;
//         }
//     }
//     printf("最大值为%d\n",max);
//     printf("最小值为%d\n",min);
//     return 0;
// }
// int main()
// {
//     int a,max;
//     scanf("%d",&max);
//     for(int i = 1;i < 5;i++)
//     {
//         scanf("%d",&a);
//         if(a>max)
//         {
//             max = a;
//         }
//     }
//     printf("最大值为%d\n",max);
//     return 0;
// }

// int main()
// {
//     int a,max;
//     scanf("%d",&max);
//     for(int i = 0;i<10;i++)
//     {
//         scanf("%d",&a);
//         if(max < a)
//         {
//             max = a;
//         }
//     }
//     printf("%d",max);
// }
// int main()
// {
//     int a,max,min;
//     scanf("%d",&a);
//     max  = a;
//     min  = a;
//     for(int i = 1;i<5;i++)
//     {
//         scanf("%d",&a);
//         if(max < a)
//         {
//             max = a;
//         }
//         if(min > a)
//         {
//             min = a;
//         }
//     }
//     printf("%d\n",min);
//     printf("%d\n",max);
// }
// int find_max(const int arr[],int k)
// {
//     int max = arr[0];
//     if(k<1) return ;
//     for(int i = 1;i<k;i++)
//     {
//         if(arr[i]>max)
//         {
//             max = arr[i];
//         }
//     }
//     return max;
// }
// #define N 10
// int main()
// {
//     int data[N];
//     for(int i = 0;i<N;i++)
//     {
//         scanf("%d",&data[i]);
//     }
//     int r = find_max(data,10);
//     printf("%d\n",r);
//     return 0;
// }

//在c语言中，函数无法返回两个返回值，但可以利用指针，传址调用改变想改变的值
#define N 10
//测试是否能双推

int  find_max_min(int arr[],int *p)
{
    int max = arr[0];
    int min = arr[0];
    for(int i = 1;i<N;i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
        }
        if(arr[i]<min)
        {
            min = arr[i];
        }
    }
    *p = min;
    return max;   
}
int main()
{
    int a = 0;
    int data [N];
    for(int i = 0;i<N;i++)
    {
        scanf("%d",&data[i]);
    }
    int r = find_max_min(data,&a);
    printf("%d %d",r,a);
    return 0;
}