// #include <stdio.h>
// #include <stdlib.h>
// typedef struct {
//     int id;
//     int scores[3];
//     int total;
// } Student;

// int compare(const void* a, const void* b) {
//     Student* sa = (Student*)a;
//     Student* sb = (Student*)b;
//     if (sa->total != sb->total) {
//         return sb->total - sa->total;
//     }
//     if (sa->scores[0] != sb->scores[0]) {
//         return sb->scores[0] - sa->scores[0];
//     }
//     return sa->id - sb->id;
// }

// int main() {
//     int n;
//     scanf("%d", &n);
//     Student students[n];
//     for (int i = 0; i < n; i++)
//      {
//         students[i].id = i + 1;
//         students[i].total = 0;
//         for (int j = 0; j < 3; j++)
//         {
//             scanf("%d", &students[i].scores[j]);
//             students[i].total += students[i].scores[j];
//         }
//     }
//     qsort(students, n, sizeof(Student), compare);

//     for (int i = 0; i < 5; i++) 
//     {
//         printf("%d %d\n", students[i].id, students[i].total);
//     }

//     return 0;
// }


// #include <stdio.h>
// #include <stdlib.h> 
// //将一个数组的所有 0 放在数组末尾，不能影响数组的非零元素顺序
// //思路，覆盖法，先将所有的非零元素放在数组前面，然后将最后一个填充的非零元素的后面所有元素都变成 0
// //双指针，一个快指针，一个慢指针，快负责找非零元素，慢指针，负责找位置填充，当快指针遇到 0 时前进，然后找到非零元素与慢指针交换
// //随后慢指针++，慢指针的移动是由于快指针的填充才移动，自己本身没有移动的规律
// //将所有的非零元素移动到慢指针指向的位置时，只需要将剩下的所有元素补 0 就可以完成算法
// typedef long long LL;
// void zeros_moves(LL a[],int n)
// {
//     //定义慢指针
//     int dest = 0;
//     //让快指针遍历整个数组找到非零元素
//     for(int src = 0;src<n;src++)
//     {
//         //如果 src 找到了非零元素就和 dest 交换，否则，前进
//         if(a[src] != 0)
//         {
//             //不用交换，只做拷贝，因为后面不管是什么都会变成 0
//             a[dest] = a[src];
//             dest++;
//         }
//     }
//     //将dest 后面的所有元素填充0
//     while(dest < n)
//     {
//         a[dest] = 0;
//         dest++;
//     }
// }
// int main()
// {
//     int n;
//     LL a[200000];
//     //输入 n，并且检测输入返回值是否正确
//     if(scanf("%d",&n) != 1)
//     return 1;
    
//     //输入数组，类型是 lld
//     for(int i = 0;i<n;i++)
//     {
//         if(scanf("%lld",&a[i]) != 1)
//         return 1;
//     }

//     //处理数组
//     zeros_moves(a,n);
//     for(int i = 0;i<n;i++)
//     {
//         printf("%lld\n",a[i]);
//     }
//     return 0;
// }



//Reveiew
#include <stdio.h>
typedef long long LL;
void zeros_end(LL a[],int n)
{
    //定义一个慢指针，用来找可以放置的整数，destination；目的地
    //转换思路，将非 0 全部放到前面，从第一个开始放，后面放 0，也是把所有 0 放到后面的方式
    int dest = 0;
    for(int src = 0;src<n;src++)
    {
        if(a[src] != 0)
        {
            a[dest] = a[src];
            dest++;
        }
    }
    while(dest<n)
    {
        a[dest] = 0;
        dest++;
    }
}
int main()
{
    int n = 0;
    if(scanf("%d",n) != 1) return 1;

    LL a[20000] ={0};
    for(int i = 0;i<n;i++)
    {
        if(scanf("%lld",a[i]) != 1) return 1;
    }
    zeros_end(a,n);
    
    for(int i = 0;i<n;i++)
    {
        scanf("%lld",a[i]);
    }
    return 0;
}