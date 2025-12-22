#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
 
//memcpy 内存拷贝函数(void *,void *,size_t)当遇到内存重叠的时候最好不要用

//memmove 也相当于内存拷贝函数，(void *,void *,size_t
//不过可以处理带有重叠内存的拷贝，拷贝方式，前前后后，
//size_t是拷贝的字节数

//memset 内存初始化函数，(void *,int value,int),放置位置起始指针
//要放置的元素，多少个字节，注意，此函数放置整形会失效，除非是0，因为是按字节放置
//每一个字节都是放置元素，而整形四个字节，或者不是一个字节都会导致放置内容不对
//究其原因是给每一个字节都赋值，所以不对


//memcpy 内存拷贝函数，返回dest的起始地址
// void * my_memcpy(void *dest,const void *src,size_t num)
// {
//     void *ret = dest;
//     assert(dest && src);
//     while(num--)
//     {
//         //按字节交换，当指针是泛型指针时，因为不知道要交还多少，所以强转成字节交换
//         *(char *)dest = *(char *)src;
//         //泛型指针强转成字节前进
//         dest = (char *)dest +1;
//         src = (char *)src +1;
//     }
//     return ret;
// }
// int main()
// {
//     //strcpy - 字符串拷贝函数，专门拷贝字符串的
//     //memcpy - 拷贝内存块的函数
//     int arr1[] = {1,2,3,4,5,6,7,8};
//     int arr2[8] = {0};
//     my_memcpy(arr2,arr1,sizeof(arr1));
//     for(int i = 0;i<sizeof(arr1)/sizeof(arr1[0]);i++)
//     {
//         printf("%d ",arr2[i]);
//     }
//     return 0;
// }


//memcpy不好对付有内存重叠的内容
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//             1 2 1 2 3 4 5 8 9 10
//
//	my_memcpy(arr1+2, arr1, 20);
//
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//
//	return 0;
//}

//所以用memmove,memmove 可以用于有同一块内存的数据
void * my_memmove(void *dest,const void *src,size_t num)
{
    //前前后后，当dest在src前面时，从前往后换，当dest在src后面时，从后往前
    void * ret =dest;
    assert(dest && src);
    if((char *)dest < (char *)src)
    {
        while(num--)
        {
            *(char *)dest = *(char *)src;
            src = (char *)src + 1;
            dest = (char *)dest + 1;
        }    
    }
    else 
    {
        while(num--)
        {
            *((char *)dest+num) = *((char *)src + num);
        }
    }
    return ret;
}
// int main()
// {
//     int arr[] = {1,2,3,4,5,6,7,8};
//     int sz = sizeof(arr)/sizeof(arr[0]);
//     my_memmove(arr+2,arr,20);
//     for(int i = 0;i<sz;i++)
//     {
//         printf("%d ",arr[i]);
//     }
//     return 0;
// }

//memset,按字节去定义数据，所以定义整型时会出错
// memset(void *dest,int value,int num);
// int main()
// {
//     char arr[] = "hello world";
//     memset(arr+2,'y',7);
//     printf("%s\n",arr);
//     return 0;
// }

// 在定义整形时避免用memset
int main()
{
	int arr[5] = { 1,2,3,4,5 };
	memset(arr, 2, 20);//以字节为单位设置的
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}


// int main()
// {
//     int arr1[] = {0,1,2,3,4,5,6,7,8};
//     int arr2[] = {1,2,3,4,5,6,7,8,9};
//     int ret = memcmp(arr1,arr2,30);
//     printf("%d\n",ret);
//     return 0;
// }


//数据类型的存储

//大端字节序和小端字节序用一个函数来判断
// int check_sys(int n)
// {
//     return *(char*)&n;
// }
// int check_sys()
// {
//     union S
//     {
//         int i;
//         char x;
//     }s;
//     s.i = 1;
//     return s.x;
    
// }
// int main()
// {
//     int n = 1;
//     int ret = check_sys(n);
//     if(ret == 1)
//     printf("小端\n");
//     else printf("小端\n");
//     //0x 00 00 00 01
//     //小端 01 00 00 00
//     //大端 00 00 00 01
//     return 0;
// }

//char是有符号还是无符号unsigned取决于编译器，在vs上是有符号char

int main()
{
    char a = -1;
    //10000000 00000000 00000000 00000001；原码
    //11111111111111111111111111111111111；补码
    //11111111   //截断，char 内存一个字节八个比特位
    //在计算表达式打印时，整型提升
    //有符号的高位补符号位
    //无符号的高位补 0
    //11111111111111111111111111111111111；补码
    //10000000000000000000000000000000001；原码
    //打印原码，a 的结果
    signed char b = -1;
    //-1
    unsigned char c = -1;

    //11111111 //截断后的
    //无符号位整形提升
    //000000000000000000000000000011111111；补码
    //unsigned 无符号，原反补相同
    //000000000000000000000000000011111111；原码
    printf("%d %d %d\n",a,b,c);
    return 0;
}

// int main()
// {
//     char a = -128;
//     //10000000 00000000 00000000 10000000；原码
//     //11111111 11111111 11111111 10000000；补码
//     //八个比特位截断 
//     //1000000；
//     //计算表达式整形提升
//     //11111111 11111111 11111111 10000000；补码
//     //又因为打印的是无符号数，
//     //所以把111111111111111111111111100000000看成无符号数
//     //原反补相同，计算成十进制打印
//     printf("%u\n",a);
//     //%u的形式打印，认为 a 中放的是无符号数
//     return 0;
// }


// int main()
// {
//    char a[1000];//0~999
//    //char 的范围是-128～127
//    // 
//    int i;
//    for (i = 0; i < 1000; i++)
//    {
//        a[i] = -1 - i;
//    }
//    //-1 -2 -3 -4 ... -127 -128 127 126 ... 4 3 2 1 0 -1 -2 ...

//    printf("%zd", strlen(a));//求得是字符串的长度，统计的是\0(ASCII码值是0)之前的字符个数
//    //255 
//    return 0;
// }