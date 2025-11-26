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