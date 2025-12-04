#include <stdio.h>
#include <ctype.h>
// int main()
// {
//     int ret = islower('A');//真为 1，假为 0
//     int num = isspace(' ');
//     printf("%d %d\n",ret,num);
//     return 0;
// }

//写一个代码，将字符串中的小写转为大写，其他的不变
//a-97 A-65   小写比大写的阿斯克码值大 32
// int main()
// {
//     char arr[] ="I Am a Student";
//     /////////////0123456789,每个字符都有下表
//     int i = 0;
//     while(arr[i] != 0)
//     {
//         if(arr[i] >= 'a' && arr[i] <= 'z')
//         if(islower(arr[i]))
//         {
//             arr[i] = toupper(arr[i]);
//         }
//         i++;
//     }
//     printf("%s\n",arr);

//     return 0;
// }
#include <string.h>

// int main()
// {
//     //strlen 的计算结果是 size_t 类型的无符号数，所以相加减的结果也是无符号数
//     if((int)strlen("abc")-(int)strlen("abcdef")>0)
//     {
//         printf(">\n");
//     }
//     //所以输出的是大于 0
//     else printf("<=\n");
//     return 0;
// }

//模拟实现求字符串；递归
// size_t my_strlen(const char *s)
// {
//     if(*s == 0)
//     return 0;
//     else
//     return 1+my_strlen(s+1);
// }
// int main()
// {
//     char arr[] ="abcdef";
//     size_t len = my_strlen(arr);
//     printf("%zd\n",len);
//     return 0;
// }


#include<assert.h>
#include <string.h>
// char* my_strcpy(char *dest,const char *src)//dest 目的  str源头
// {
//     assert(src && dest);
//     //拷贝\0之前的内容
//     char *ret = dest;
//     while(*src != 0)
//     {
//         *dest = *src;
//         src++;
//         dest++;
//     }
//     *dest = *src;//拷贝 \0
//      return ret;
// }

//strcpy，字符串拷贝函数，将后面的字符串拷贝到前面的字符串，遇见\0停止

// char *my_strcpy(char *dest,const char* src)
// {
//     assert(dest && src);
//      char *ret = dest;
//     //后置++，先使用再++，自己本身也在变，直到拷贝到\0的时候就跳出循环
//     while(*dest++ = *src++)
//     ;
//      return ret;
// }

// int main()
// {
//     char arr1[] = "abcdef";
//     char arr2[] = "***********";
//     char *ret = my_strcpy(arr2,arr1);
//     printf("%s",arr2);
//     return 0;
// }

//strcat 字符串拼接函数，将后面的字符串移到前面的字符串的\0后拼接，直到\0停止
// char * my_strcat(char *dest,const char *src)
// {
//     assert(dest && src);
//     char *ret = dest;
//     //找到目标位置的\0
//     while(*dest != 0)
//     {
//         dest++;
//     }
//     //赋值运算
//     while(*dest++ = *src++)
//     ;
//     return ret;
// }
// int main()
// {
//     char arr1[20] = "abcdef";
//     char arr2[] = "hijkl";
//     char *ret = my_strcat(arr1,arr2);
//     printf("%s\n",ret);
//     return 0;
// }

//strcmp函数，比较字符串大小
// int my_strcmp(const char *str1,const char *str2)
// {
//     assert(str1 && str2);
//     while(*str1 == *str2)
//     {
//         if(*str1 == 0)
//         {
//             return 0;
//         }
//         str1++;
//         str2++;
//     }
//     if(*str1>*str2)     return 1;
//     if(*str2>*str1)     return -1;
// }
// int main()
// {
//     char * str1 ="abcde";
//     char * str2 ="cdef";
//     int ret = my_strcmp(str1,str2);
//     if(ret == 0) printf("相等\n");
//     else if(ret <0) printf("小于\n");
//     else printf("大于\n");
//     return 0;
// }

//strncpy strncat strncmp 指定字符个数比较字符串大小，拷贝，拼接
// int main()
// {
//     char arr1[] = "abcdef";
//     char arr2[20] = "xxxxxxxxxxxxxxx";
//     int len = strlen(arr1);
//     strncat(arr2,arr1,5);
//     printf("%s\n",arr2);
//     return 0;
// }


//模拟实现 strstr 函数
// char * my_strstr(const char* str1,const char * str2)
// {
//     //暴力查找法
//     const char *s1 = NULL;
//     const char *s2 = NULL;
//     const char *cur = str1;
//     while(*cur)
//     {
//         s1 = cur;
//         s2 = str2;
//         while(*s1 != 0 && *s2 != 0 && *s1 == *s2)
//         {
//             s1++;
//             s2++;
//         }
//         if(*s2 == 0)
//         return (char *)cur;
//         cur++;
//     }      
//     return NULL;
         
// }   
// int main()
// {
//     char arr1[] = "this is an apple";
//     char arr2[] = "ppl";
//     char *ret  = my_strstr(arr1,arr2);
//     printf("%s\n",ret);
//     return 0;
// }
// #include <string.h>
// int main()
// {
//     char arr[] = "daixiangyu@2007.0304";
//     char arr2[] = {0};
//     strcpy(arr2,arr);
//     const char *sep = "@.";
//     char *ret =NULL;
//     for(ret = strtok(arr2,sep);ret!=NULL;ret = strtok(NULL,sep))
//     {
//         printf("%s\n",ret);
//     }
//     return 0;
// }

// int main()
// {
//     int i =0;
//     for(;i<=10;i++)
//     {
//         printf("%d:    %s\n",i,strerror(i));
//     }
//     return 0;
// }

//perror函数
// int main()
// {
//     //fopen以读的形式打开文件，如果文件不存在，就打开失败
//     FILE *pf = fopen("test.txt","r");
//     if(pf==NULL)
//     {
//         printf("%s\n",strerror(errno));
//         return 1;
//     }

//     fclose(pf);

//     return 0;
// }


int main()
{
    //	//fopen以读的形式打开文件的时候，如果文件不存在，就打开失败
	FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)
	{
		perror("zhangsan");
		return 1;
	}
	//读文件
    fclose(pf);
    return 0;
}