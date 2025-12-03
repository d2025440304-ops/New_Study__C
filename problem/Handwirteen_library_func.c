//模拟strlen
#include <assert.h>
#include <stdio.h>
// int my_strlen(const char *src)
// {
//      assert(src);
//     int cnt = 0;
//     while(*src != 0)
//     {
//         cnt++;
//         src++;
//     }
//     return cnt;
// }
// int main()
// {
//     char arr1[] = "abcdef";
//     int p = my_strlen(arr1);
//     printf("%d\n",p);
//     return 0;
// }

//模拟 strcmp 函数
// int my_strcmp(const char* p1,const char* p2)
// {
//     assert(p1 && p2);
//     while(*p1==*p2)
//     {
//         //当两个都为 0 时，返回 0，相等
//         if(*p1 == 0)
//         {
//             return 0;
//         }
//         p1++;
//         p2++;
//     }
//     if(*p1 >*p2) return 1;
//     else if(*p1 < *p2) return -1; 
// }
// int main()
// {
//     char arr1[] = "abcq";
//     char arr2[] = "abcq";
//     int ret = my_strcmp(arr1,arr2);
//     if(ret > 0)
//     printf("大于\n");
//     else if (ret == 0)
//     printf("等于\n");
//     else 
//     printf("小于\n");
// }


//模拟 strcpy 函数
// char * my_strcpy(char *p1,const char *p2)
// {
//     assert(p1 && p2);
//     char * ret = p1;
//     assert(p1 && p2);
//     //赋值 copy 算法，后置加加
//     while(*p1++ = *p2++)
//     ;
//     return ret;
// }
// int main()
// {
//     char arr1[] = "abcdefg";
//     char arr2[30] = {0};
//     char * ret = my_strcpy(arr2,arr1);
//     printf("%s\n",ret);
//     return 0;
// }



//模拟 strcat 的实现
//模拟 strcpy 函数

// char * my_strcat(char *p1,const char *p2)
// {
//     assert(p1 && p2);
//     char * ret = p1;
//     while(*p1 != 0)
//     {
//         p1++;
//     }
//     //赋值 copy 算法，后置加加
//     while(*p1++ = *p2++)
//     ;
//     return ret;
// }

// int main()
// {
//     char arr1[] = "abcdefg";
//     char arr2[30] = "abc";
//     char * ret = my_strcat(arr2,arr1);
//     printf("%s\n",ret);
//     return 0;
// }

//模拟 strstr 的实现，strstr 函数，在前面的字符好中找到第一次出现与后面的字符串相同的字符串，找到后返回第一次出现相同字符串的地址，直到遇到\0
char * my_strstr(const char *str1,const char *str2)
{
    const char *s1 = NULL;
    const char *s2 = NULL;
    const char *cur = str1;
    
    if(*str2 == 0)
    return (char *)str1;//空字符串是任何字符串的子串

    while(*cur)
    {
        s1 = cur;
        s2 = str2;
        while(*s1 && *s2 && *s1 == *s2)
        {
            s1++;
            s2++;
        }
        //直到把str2找完
        if(*s2 == 0)
        {
            return (char *)cur;
        } 
        cur++;
    }
    return NULL;

}
int main()
{
    char arr1[] = "abbcde";
    char arr2[] = "bcd";
    char *ret = my_strstr(arr1,arr2);
    // if(ret != NULL)
    // printf("%.*s",(int)strlen(arr2),ret);//.表示精度，*表示又参数动态宽度，s 是字符串起始指针
    printf("%s\n",ret);
    return 0;
}