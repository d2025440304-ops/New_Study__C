#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// int my_strlen(char * p)
// {
//     char * z = p;
//     while(*p)
//     {
//         p++;
//     }
//     int x = p-z;
//     return x;
// }
// int main()
// {
//     char arr[] = "abcdef";
//     int r = my_strlen(arr);
//     printf("%d\n",r);
//     return 0;
// }
//

//字符串逆序
// void reverse(char * str)
// {
//     char *left = str;
//     char *right =  str+strlen(str)-1;
//     while(left<right)
//     {
//         char temp = *left;
//         *left = *right;
//         *right = temp;
//         left++;
//         right--;
//     }
// }
// int main()
// {
//     char str [] = "abcdef";
//     reverse(str);
//     printf("%s\n",str);
//     return 0;
// }
//三次转换法
// void reverse(char * str,int start,int end)
// {
//     char * left =str+start-1;
//     char * right=str+end-1;
//     while(left<right)
//     {
//         char temp = *left;
//         *left = *right;
//         *right = temp;
//         left++;
//         right--;
//     }
// }

// void leftround(char * str,int k)
// {
//     int len = strlen(str);
//     int time = k %len;
//     reverse(str,0,k-1);
//     reverse(str,k,len-1);
//     reverse(str,0,len-1);
// }
// int main()
// {
//     char str [] = "abcdef";
//     int k = 0;
//     scanf("%d",&k);
//     leftround(str,k);
//     printf("%s\n",str);
//     return 0;
// }
//循环法
// void leftround(char* str,int len)
// {
//     int k;
//     scanf("%d",&k);
//     int time = k %len;
//     int j = 0;
//     for(int i = 0;i<time;i++)
//     {
//         int temp = str[j];
//         for(int j = 0;j<len-1;j++)
//         {
//             str[j] = str[j+1];
//         }
//         str[len-1] =  temp;
//     }
// }
// 库函数法
// void leftround1(char str[],int len)
// {
//     int k = 0;
//     scanf("%d",&k);
//     int time = k %len;
//     char *p = str;
//     char temp [10000] = {0};
//     strcpy(temp,p+time);
//     strncat(temp,str,time);
//     strcpy(str,temp);
// }
// int main()
// {
//     char str [] = "abcdef";
//     int len = strlen(str);
//     leftround(str,len);
//     leftround1(str,len);
//     printf("%s\n",str);
// }
//字符串左旋
// void reverse(char *str,int start,int end)
// {
//     //要置换两个值，需要指针，又因为下标是从0开始的，所以要减1
//     char *left = str+start;
//     char *right = str+end-1;
//     while(left<right)
//     {
//         char temp = *left;
//         *left = *right;
//         *right = temp;
//         left++;
//         right--;        
//     }
// }
// void leftround(char *str,int k)
// {
//     int len = strlen(str);
//     //算真正左旋的个数
//     int time = k%len;
//     //字符串逆序
//     //思路是置换time之前的和之后的字符串，再整体置换
//     reverse(str,0,time-1);
//     reverse(str,time,len-1);
//     reverse(str,0,len-1);
// }
// int main()
// {
//     char str[] ="abcdef";
//     int k = 0;
//     scanf("%d",&k);
//     leftround(str,k);
//     printf("%s\n",str);
// }

//字符串逆序
// void reverse(char *str,int len)
// {
//     char *left = str;
//     char *right = str+len-1;
//     while(left<right)
//     {
//         char temp = *left;
//         *left = *right;
//         *right = temp;
//         left++;
//         right--;
//     } 
// }
// int main()
// {
//     char str[] = "abcdef";
//     int len = strlen(str);
//     reverse(str,len);
//     printf("%s\n",str);
//     return 0;
// }

// int my_strlen(char *str)
// {
//     int cnt = 0;
//     while(*str!=0)
//     {
//         str++;
//         cnt++;
//     }
//     return cnt;
// }
// int main()
// {
//     char str[] = "abcdef";
//     int r = my_strlen(str);
//     printf("%d\n",r);
//     return 0;
// }

//将一个数组的所有的偶数都放在这个数组后面，奇数都放在前面
//思路；；定义双指针变量，分别指向第一个和最后一个，因为前面都要奇数，所以前面的指针遇到奇数就跳过，找到偶数和后面的奇数换
//后面的想要偶数，所以后面往前找奇数和前面的指针的偶数换
// void Func_double_end(int *p,int sz)
// {
//     //定义双指针
//     int *left = p;
//     int *right = p+sz-1;
//     //确定大条件
//     while(left<right)
//     {
//         while(*left %2 != 0 && left<right ) //避免全是奇数出现越界访问
//         {
//             left++;
//         }
//         while(*right %2 == 0 && left<right ) //避免全是奇数出现越界访问
//         {
//             right--;
//         }
//         int tmp = *left;
//         *left = *right;
//         *right = tmp;
//     }
// }
// int main()
// {
//     int arr[] = {5,6,8,9,4,3,7,2};
//     int sz = sizeof(arr)/sizeof(arr[0]);
//     Func_double_end(arr,sz);
//     for(int i = 0;i<sz;i++)
//     {
//         printf("%d ",arr[i]);
//     }
//     return 0;
// }

//写一个函数用指针打印一个一维数组
// void print(int *p,int sz)
// {
//     for(int i = 0;i<sz;i++)
//     {
//         printf("%d ",*(p+i));//*(p+i) == arr[i],[]具有解应用的作用
//     }
// }
// int main()
// {
//     int arr[] = {1,2,3,4,5,6,7};
//     int sz = sizeof(arr)/sizeof(arr[0]);
//     print(arr,sz);
// }

// //整形冒泡排序
// bubble_sort(int arr[],int sz)
// {
//     for(int i = 0; i<sz-1;i++)
//     {
//         int flag = 0;
//         for(int j = 0;j<sz-1-i;j++)
//         {
//             if(arr[j]>arr[j+1])
//             {
//                 int tmp = arr[j];
//                 arr[j] = arr[j+1];
//                 arr[j+1] =  tmp;
//                 flag = 1;
//             }
//         }
//         if(flag == 0)
//         {
//             break;
//         }
//     }
// }
// void print(int *p,int sz)
// {
//     for(int i = 0;i<sz;i++)
//     {
//         printf("%d ",*(p+i));//*(p+i) == arr[i],[]具有解应用的作用
//     }
// }
// int main()
// {
//     int arr[] = {1,2,3,9,5,6,7};
//     int sz = sizeof(arr)/sizeof(arr[0]);
//     bubble_sort(arr,sz);
//     print(arr,sz);
// }


//写一个函数来判断一个字符串是否为另一个字符串旋转后的结果，如果是，返回1，如果不是返回0


//先复习左旋字符串
//字符串逆序函数
// int leftround(char *str,char * str1)
// {
//     int len = strlen(str);
//     //通过循环法来判断是否是经过旋转的字符串，最多循环len次，每次都判断是否相等，用strcmp函数判断
//     //循环法思路；i是次数，循环len次，下标是j，假设旋转len次，第一次，旋转一个，把第一个拿出来，放进tmp里
//     //后面的转移到前面去，然后最后一个空下来，把tmp赋给最后一个
//     int i = 0;
//     int j = 0;
//     for(int i = 0;i<len;i++)
//     {
//         int tmp = str[j];
//         for(int j = 0;j<len-1;j++)
//         {
//             str[j] = str[j+1];
//         }
//         str[len-1] = tmp;
//         if(strcmp(str,str1) == 0)
//         {
//             return 1;
//         }
//     }
//     return 0;
// }
//法二，库函数法
// int  findleftround(char *str,char *str1)
// {
//     //思路,要比较的字符串复制一次，这样就包含所有旋转的情况之后的样子，再用strstr函数，寻找字符串
//     char arr[200] = {0};
//     strcpy(arr,str);
//     strcat(arr,str);
//     return (strstr(arr, str1) != NULL) ? 1 : 0;//三目操作符
// }
// int main()
// {
//     char str[] = "abcdef";
//     char * str1 = "bcdefa";
//     int r =  findleftround(str,str1);
//     if(r == 1) printf("是经过旋转的字符串\n");
//     else printf("不是经过旋转的字符串\n");
//     return 0;
// }

//在一个从左向右从上往下都是升序的二维数组里寻找一个数，并判断是否存在
//时间复杂度低于on
//矩阵，斜上角查找，因为这个矩阵从左至右，从上至下都是递增的，所以每次从右上角查找就会排除一行或者一列
//如果查找数比斜角数大，排除第一行，如果小，排除最后一列，就这样找
// int findnum(int arr[3][3],int x,int y,int key)
// {
//     //因为从右上角查，所以直接定义
//     int i = 0;
//     int j = y-1;
//     //因为不知道找几次才能找出来，所以用while
//     //用while，同时找的范围要合法，所以限制
//     while(i<x  && j>=0)
//     {
//         if(arr[i][j] > key)
//         {
//             y--;
//         }
//         else if (arr[i][j] < key)
//         {
//             i++;
//         }
//         else  return 1;
//     }
//     return 0;
// }
// int main()
// {
//     int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
//     int key = 11;
//     int r = findnum(arr,3,3,key);
//     if(r == 1) printf("存在\n");
//     else printf("不存在\n");
//     return 0;
// }



// 以下为4个嫌疑犯的供词:
// A说：不是我。
// B说：是C。
// C说：是D。
// D说：C在胡说
// 已知3个人说了真话，1个人说的是假话。
// 现在请根据这些信息，写一个程序来确定到底谁是凶手。

//思路，穷举，假设从a到d这四个人都是杀手，讲他们的话代价条件，如果满足，就能找出
// void findkiller()
// {
//     for(char killer = 'a';killer<='d';killer++)
//     {
//         if(('a'!=killer) + ('c' == killer) + ('d' == killer) + ('d' != killer) == 3)
//         {
//             printf("%c",killer);
//         }
//     }
// }
// int main()
// {
//     findkiller();
//     return 0;
// }


//杨辉三角
// 1
// 1 1
// 1 2 1
// 1 3 3 1
//思路，半个二维数组，i行j列，翻译条件，对角线就是i=j，j=0，都是1，其他的情况就是上一行的两个数加起来
//改变数组内容
// void YangHui(int arr[][4],int x)
// {
//     int i = 0;
//     int j = 0;
//     for(i = 0;i<x;i++)
//     {
//         //半个二维数组，所以小于等于i，限制对角线
//         for(j = 0;j<=i;j++)
//         {
//             if(i == j || j == 0)
//             {
//                 arr[i][j] = 1;
//             }
//             else 
//             arr[i][j] = arr[i-1][j]+arr[i-1][j-1];
//         }
//     }
// }
// void print(int arr[][4],int x)
// {
//     int i = 0;
//     int j = 0;
//     for(i = 0;i<x;i++)
//     {
//         for(j = 0;j<=i;j++)
//         {
//             printf("%d ",arr[i][j]);
//         }
//         printf("\n");
//     }
// }
// int main()
// {
//     int arr[][4] = {0};
//     YangHui(arr,4);
//     print(arr,4);
//     return 0;
// }




//单身狗二，在一组数中找到两个不相同的数
//将数组整体异或，得到一个结果，然后找到这个结果二进制第k位为1的，按照第k位是否为1来分成两组，再次异或存到指针中

void Fun_num(int arr[],int n ,int *pum1,int *pum2)
{
    //首先找到异或的结果num，异或时直接用一个为0的变量异或等
    int num = 0;
    for(int i = 0;i<n;i++)
    {
        num ^=arr[i];
    }
    //用num右移再按位与1的方法找到第k位为1的k
    int k = 0;
    for(int i = 0;i<32;i++)
    {
        //任何数按位与1都只能得到1或者0.所以可以判断某位是否为1
        if(((num>>i) & 1) != 0)
        {
            k = i;
            break;
        }
    }
    //找到k了，现在要分组   
    *pum1 = *pum2 = 0;
    for(int i = 0;i<n;i++)
    {
        if(((arr[i]>>k) & 1) != 0)
        {
            *pum1 ^= arr[i];
        }
        else
        {
            *pum2 ^= arr[i];
        }
    }
}
int main()
{
    int arr [] = {1,2,3,4,5,1,2,3,4,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int a = 0, b = 0;
    Fun_num(arr,n,&a,&b);
    printf("%d %d",a,b);
    return 0;
}