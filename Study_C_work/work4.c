// //打印星
// #include <stdio.h>
// int main() 
// {
//     int a = 0;
//     while(scanf("%d",&a) != -1)
//     {
//         for(int i =0;i<a;i++)
//         {
//             for(int j = 0;j<a;j++)
//             {
//                 if(i == j || (i+j)==a-1)
//                 {
//                     printf("*");
//                 }
//                 else 
//                 {
//                     printf(" ");    
//                 }
//             }
//             printf("\n");
//         }

//     }
//             return 0;
// }
// //矩阵转换
// #include <stdio.h>
// int main() 
// {
//     int n,m;
//     scanf("%d%d",&n,&m);
//     int arr[n][m];
//     for(int i = 0;i<n;i++)
//     {
//         for(int j = 0;j<m;j++)
//         {
//             scanf("%d",&arr[i][j]);//输入二维数组
//         }
//     }
//     for(int i = 0;i<m;i++)
//     {
//         for(int j = 0;j<n;j++)
//         {
//             printf("%d ",arr[j][i]);//输出二维数组
//         }
//         printf("\n");
//     }
// }
// 有序序列合并
//输入两个数，这两个数表示这个两个数组中有几个元素，这两个数组是升序的，需要把这两个数组中的数从小到大的重新排列出来，用c语言实现
#include <stdio.h>
int main() 
{
    int n,m;
    scanf("%d %d",&n,&m);//表示两个数组各有几个元素
    int arr1[1000];
    int arr2[1000];
    int i = 0,j = 0;
    for(int i = 0;i<n;i++)
    {
        scanf("%d",&arr1[i]);
    }
    for(int j = 0;j<m;j++)
    {
        scanf("%d",&arr2[j]);//分别的输入这两数组中的元素
    }
    //采取一个一个比较的方法，大就往下走
   while(i<n && j<m)//当这两个数组的比较都在合法不越界的情况下比较
    {
        if(arr1[i]<arr2[j])
        {
            printf("%d ",arr1[i]);
            i++;
        }
        else
        {
            printf("%d ",arr2[j]);
            j++;
        }
    }       //哪个大打印哪个
           while(i<n)//当第一个数组在合法情况下，说明这个数组的所有数都是小于另一个数组的，又因为是升序的，所以直接打印
    {
        printf("%d ",arr1[i]);
        i++;
    }
    while(j<m)//同上
    {
        printf("%d ",arr2[j]);
        j++;
    }
        return 0;
}
// //输入10个数，求平均数
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     int arr[1000];
//     for(int i = 0;i<n;i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     long long  sum = 0;
//     for(int i = 0;i<n;i++)
//     {
//         sum += arr[i];
//     }
//     double avg = (double)sum/n;
//     printf("%.2lf\n",avg);
//     return 0;
// }
// int main()
// {
//     int arr1[10]={0};
//     int arr2[10]={9};
//     for(int i = 0 ;i<10;i++)
//     {
//         int tem = arr1[i];
//         arr1[i] = arr2[i];
//         arr2[i] = tem;
//     }
//     for(int i = 0;i<10;i++)
//     {
//         printf("%d ",arr1[i]);
//     }
//     printf("\n");
//     for(int i = 0;i<10;i++)
//     {

//         printf("%d ",arr2[i]);
//     }
//     return 0;
// }