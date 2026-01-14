#include <stdio.h>
void Select_sort(int arr[10],int n)
{

    for(int i = 0;i<n-1;i++)
    {
        int min = i;
        for(int j = i+1;j < n;j++)
        {
            if(arr[i] < arr[min])
            min = i;
        }
    }
}

int main()
{
    int arr[10] = {0};
    for(int i = 0;i<sizeof(arr)/sizeof(arr[i]);i++)
    {
        if(scanf("%d",&arr[i]) != EOF);
    }
    Select_sort(arr,sizeof(arr)/sizeof(arr[0]));
    for(int i = 0;i<sizeof(arr)/sizeof(arr[i]);i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
