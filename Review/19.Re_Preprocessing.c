#include <stdio.h>
#if 0
int main()
{
    printf("%s\n",__FILE__);
    printf("%s\n",__DATE__);
    printf("%s\n",__TIME__);
    printf("%s\n",__LINE__);
    printf("%s\n",__STDC__);
    return 0;
}
#define DEBUG_PRINT printf("file:%s\tline:%d\t \
                         date:%s\ttime:%s\n" ,\
                         __FILE__,__LINE__ ,       \
                         __DATE__,__TIME__ )   


                         
// 在定义宏函数时，在表达式部分要给每一个部分都给上括号，这样才保证不会出现问题
// 因为宏在预处理时，是进行替换的，而不是像函数一样
#define SQUARE(x) ((x)*(x))
int main()
{
    int a = 5;
    int ret = SQUARE(a+1);
    printf("%d\n",ret);
    return 0;
}


// 写一个宏，求两个数的最大值
#define M 10
#define MAX(x,y) ((x)>(y)?(x):(y))
int main()
{
    int a = 3;
    int b = 5;
    int m = MAX(M,5);
    printf("%d\n",m);
    return 0;
}

#define Malloc(n,type)  (type*)malloc(n*sizeof(type))

int main()
{
    int *pf = (int *)malloc(20);
    int *pf = Malloc(10,int);
    if(pf == NULL)
    {
        perror("Malloc");
        return 1;
    }

    return 0;
}
    #endif