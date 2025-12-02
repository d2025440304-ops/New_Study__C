//假设环境是x86环境，程序输出的结果是啥？



//首先，x86环境是64位，代表64个地址线，64个二进制位，8个字节，所以地址的内存是8个字节
#include <stdio.h>

//int main()
//{
//    int a[5][5];//首先是个二维数组，a是数组名，代表数组的首元素，二维数组的首元素是下表为0的一维数组
//
//    int (*p)[4];//p是一个数组指针，p指向的数组是4个整型元素的
//
//    p = a;//a是数组名，代表首元素的地址，p 指向了这个地址，由于类型原因 p 指针只能指向数组中的四个元素，所以 p 指向了下标为 0 的数组中的前四个元素
//     
//    printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//    //&p[4][2]可以等价转换为&(*(*(p+4)+2)),因为 p 是一个数组指针，类型决定步长，加 4就跳过 16 个元素，所以此时 p 指向第 17 个的元素
//		解引用后 加 2就是指向第19个元素的指针，即下标为[3][3]
//    return 0;
//}


//
//指针-指针 绝对值 得到的是指针和指针之间的元素个数
//
//
//#include <stdio.h>
//int main()
//{
//    int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//
//    int* ptr1 = (int*)(&aa + 1);
//
//    int* ptr2 = (int*)(*(aa + 1));
//
//    printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));
//
//    return 0;
//}
//



// #include <stdio.h>

// int main()
// {
//    char* a[] = { "work","at","alibaba" };
//    char** pa = a;
//    pa++;//字符指针指向整个字符，存的是首字符的地址
//    printf("%s\n", *pa);
//    return 0;
// }



//#include <stdio.h>
//int main()
//{
//    char* c[] = { "ENTER","NEW","POINT","FIRST" };
//    char** cp[] = { c + 3,c + 2,c + 1,c };
//    char*** cpp = cp;
//
//    printf("%s\n", **++cpp);
//    printf("%s\n", *-- * ++cpp + 3);
//    printf("%s\n", *cpp[-2] + 3);
//    printf("%s\n", cpp[-1][-1] + 1);
//    return 0;
//}

#include <ctype.h>

//int main()
//{
//	//int ret = islower('A');
//	int ret = isspace('	');
//	printf("%d\n", ret);
//
//	return 0;
//}


//写一个代码，将字符串中的小写字母转大写，其他字符不变。

//a - 97 A -65 =32
//b - 98 B -66 =32
//int main()
//{
//	char arr[] = "I Am a Student";
//	//            I Am a Student\0
//	//            0123 
//	int i = 0;
//	while (arr[i] != '\0')
//	{
//		//if (arr[i] >= 'a' && arr[i] <= 'z')
//		if(islower(arr[i]))
//		{
//			arr[i] = toupper(arr[i]);
//		}
//		i++;
//	}
//	printf("%s\n", arr);
//
//	return 0;
//}



//int main()
//{
//	printf("%c\n", toupper('a'));
//	printf("%c\n", toupper('B'));
//	printf("%c\n", tolower('B'));
//	return 0;
//}
//

#include <string.h>

//int main()
//{
//	//    size_t        size_t
//	//       3        -         6
//	if ((int)strlen("abc") - (int)strlen("abcdef")>0)
//	{
//		printf(">\n");
//	}
//	else
//	{
//		printf("<=\n");
//	}
//
//	return 0;
//}


#include <assert.h>

//计数器的版本
//size_t my_strlen(const char* s)
//{
//	assert(s);
//	int count = 0;//计数器
//	while (*s != '\0')
//	{
//		count++;
//		s++;
//	}
//	return count;
//}

//不创建临时变量，求字符串的长度 -- 递归
//size_t my_strlen(const char* s)
//{
//	if (*s == '\0')
//		return 0;
//	else
//		return 1 + my_strlen(s+1);
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	size_t len = my_strlen(arr);
//	printf("%zd\n", len);
//
//	return 0;
//}
//
#include <string.h>

//void my_strcpy(char* dest, const char* src)
//{
//	assert(src != NULL);
//	assert(dest != NULL);
//
//	//拷贝\0前面的内容
//	while (*src != '\0')
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = *src;//拷贝\0
//}

//void my_strcpy(char* dest, const char* src)
//{
//	assert(src != NULL);
//	assert(dest != NULL);
//
//	//拷贝\0前面的内容
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}

//char* my_strcpy(char* dest, const char* src)
//{
//	assert(src != NULL);
//	assert(dest != NULL);
//	char* ret = dest;
//	//拷贝\0前面的内容
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;//
//}
//
//int main()
//{
//	char arr1[] = "hello bit";
//	char arr2[20] = "xxxxxxxxxxxxxx";
//	
//	char* ret = my_strcpy(arr2, arr1);
//
//	printf("%s\n", arr2);
//	printf("%s\n", ret);
//
//	return 0;
//}

// #include <string.h>

// //strcat 函数用来连接字符串
// //函数返回的是目标空间的起始地址

// char* my_strcat(char* dest, const char* src)
// {
// 	assert(dest && src);
// 	char* ret = dest;
// 	//1. 找打目标空间的\0
// 	while (*dest != '\0')
// 		dest++;
// 	//2. 拷贝
// 	while (*dest++ = *src++)
// 		;//空语句
// 	return ret;
// }

// int main()
// {
// 	char arr1[20] = "hello ";//hello world
// 	char arr2[] = "world";

// 	char*s = my_strcat(arr1, arr2);
// 	printf("%s\n", arr1);
// 	printf("%s\n", s);
// 	//printf("%s\n", my_strcat(arr1, arr2));

// 	return 0;
// }







