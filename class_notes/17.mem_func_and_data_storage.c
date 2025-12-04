#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <assert.h>

//memcpy函数拷贝结束后，会返回目标空间的起始地址

//void* my_memcpy(void* dest, void* src, size_t num)
//{
//	void* ret = dest;
//	int i = 0;
//	assert(dest && src);
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;
//		src = (char*)src + 1;
//		dest = (char*)dest + 1;
//	}
//	return ret;
//}
//
//void* my_memcpy(void* dest, void* src, size_t num)
//{
//	void* ret = dest;
//	int i = 0;
//	assert(dest && src);
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;
//		((char*)src)++;
//		((char*)dest)++;
//	}
//	return ret;
//}
//
//int main()
//{
//	//strcpy - 字符串的拷贝
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//             0 1 2 3 4
//	int arr2[20] = { 0 };
//	              //0 1 2 3 4
//	//memcpy - 针对内存块进行拷贝
//	my_memcpy(arr2, arr1, 20);
//
//	int i = 0;
//	for (i = 0; i < 20; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//
//	return 0;
//}


//
//void* my_memcpy(void* dest, const void* src, size_t num)
//{
//	void* ret = dest;
//	int i = 0;
//	assert(dest && src);
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;
//		((char*)src)++;
//		((char*)dest)++;
//	}
//	return ret;
//}
//
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



//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	memmove(arr+2, arr, 5*sizeof(int));
//
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

//memmove函数拷贝完成后，会返回目标空间的起始地址
//
//void* my_memmove(void* dest, const void* src, size_t num)
//{
//	assert(dest && src);
//	void* ret = dest;
//	if (dest < src)
//	{
//		//前->后
//		while (num--)
//		{
//			*(char*)dest = *(char*)src;
//			dest = (char*)dest + 1;
//			src = (char*)src + 1;
//		}
//	}
//	else
//	{
//		//后->前
//		while (num--)
//		{
//			*((char*)dest+num) = *((char*)src + num);
//		}
//	}
//	return ret;
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	my_memmove(arr, arr+2, 5 * sizeof(int));
//
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

//
//int main()
//{
//	char arr[] = "hello world";
//	memset(arr+2, 'y', 7);
//	printf("%s\n", arr);
//
//	return 0;
//}


//int main()
//{
//	int arr[5] = { 1,2,3,4,5 };
//	memset(arr, 0, 20);//以字节为单位设置的
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}



//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7 };
//	int arr2[] = { 1,2,3,4,8,8,8 };
//	int ret = memcmp(arr1, arr2, 20);
//	printf("%d\n", ret);
//
//	return 0;
//}

//
//int main()
//{
//	int n = 0x11223344;
//
//	return 0;
//}

//设计一个小程序来判断当前机器的字节序

//int check_sys()
//{
//	int n = 1;
//
//	if (*(char*)&n == 1)
//		return 1;//小端
//	else
//		return 0;//大端
//}
//
//int check_sys()
//{
//	int n = 1;
//	return *(char*)&n;
//}
//
//int main()
//{
//	int ret = check_sys();
//	if (ret == 1)
//		printf("小端\n");
//	else
//		printf("大端\n");
//
//	//0x00 00 00 01
//
//	//01 00 00 00
//	//00 00 00 01
//	return 0;
//}
//

#include <stdio.h>

//char 到底是有符号的char还是无符号的char是取决于编译器的！
//在VS上char == signed char
//
//int main()
//{
//    char a = -1;
//    //10000000000000000000000000000001
//    //11111111111111111111111111111110
//    //11111111111111111111111111111111
//    //11111111 - a
//    //11111111111111111111111111111111
//    signed char b = -1;
//    //11111111 - b
//    //11111111111111111111111111111111
//    //
//    unsigned char c = -1;
//    //11111111 - c
//    //00000000000000000000000011111111
//    printf("a=%d, b=%d, c=%d", a, b, c);
//    //-1 -1 255
//
//    return 0;
//}
//



//#include <stdio.h>
//int main()
//{
//    char a = -128;
//    //10000000000000000000000010000000
//    //11111111111111111111111101111111
//    //11111111111111111111111110000000
//    //10000000 - a
//    //11111111111111111111111110000000
//    //
//    printf("%u\n", a);//?
//    //%u的形式打印，是认为a中存放的是无符号数
//    //a是char类型，首先要整型提升
//    //
//    return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//    char a = 128;
//    //00000000000000000000000010000000
//    //10000000 - a
//    //11111111111111111111111110000000
//    printf("%u\n", a);
//
//    return 0;
//}
//
//int main()
//{
//	char c = -128;
//	printf("%d\n", c);
//	return 0;
//}

#include <stdio.h>

//int main()
//{
//    char a[1000];//0~999
//    int i;
//    for (i = 0; i < 1000; i++)
//    {
//        a[i] = -1 - i;
//    }
//    //-1 -2 -3 -4 ... -127 -128 127 126 ... 4 3 2 1 0 -1 -2 ...
//
//    printf("%zd", strlen(a));//求得是字符串的长度，统计的是\0(ASCII码值是0)之前的字符个数
//    //255 
//    return 0;
//}


