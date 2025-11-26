// //任何数异或自己都是0，任何数异或0都是本身

// int main()
// {
//     int a,b;
//     scanf("%d %d %d",&a,&b);
//     b = a ^ b;
//     a = a ^ b;
//     a = a ^ b;
//     return 0;
// }

//输入一个数，计算这个数在编译器里的二进制序列，有多少个一
// int count_one(int x)
// {
//     int cnt = 0;//计数器
//     while(x)
//     {
//         x = x & (x-1);//算法；去掉1的
//         cnt ++;
//     }
//     return cnt;
// }
// int main()
// {
//     int n = 0;
//     scanf("%d",&n);
//     int r = count_one(n);
//     printf("%d\n",r);
//     return 0;
}
//00000000000000000
//10010101111111111

// n ^ n = 0;;n ^ 0 = n;

//一个数组里 ，只有一个数字出现过一次，其他都是成对出现的，求出这个数；
// int Fun(int arr[],int n)
// {
//     int ret = 0;
//     for(int x = 0;x<n;x++)
//     {
//         ret ^= arr[x];
//     }
//     return ret;
// }

// int main()
// {
//     int arr[] = {1,2,3,4,5,4,3,2,1};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int r = Fun(arr,n);
//     printf("%d\n",r);
//     return 0;
//  }

// void print(int x)
// {
//     for(int i =30;i>=0;i-=2)
//     {
//         printf("%d ",(x>>i)&1);
//     }
//     printf
//     for(int i =31;i>=1;i-=2)
//     {
//         printf("%d ",(x>>i)&1);
//     }
// }
// int main()
// {
//     int a;
//     scanf("%d",&a);
//     print(a);
//     return 0;
// }


// x ^ y 会让所有不一样的变成1


// int fun(int x,int y)
// {
//     int ret = x ^ y;
//     int cnt = 0;
//     while(ret != 0)
//     {
//         ret = ret &  (ret-1);
//         cnt++;
//     }
//     return cnt;
// }


// int main()
// {
//     int a,b;
//     scanf("%d %d",&a,&b);
//     int r = fun(a,b);
//     printf("%d\n",r);
//     return 0 ;
// }