#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//实现一个类qsort函数，用冒泡排序的逻辑实现，并用来比较整形和结构体



//定义一个结构体，并重命名为Students
typedef struct 
{
    char name[20];
    int age;
    int gpa;
}Students;

//在写函数时，如果有返回值，一定要写返回值的类型
//写一个整形的比较函数
int  cmp_int(const void *e1,const void *e2)
{
    int a = *(const int *)e1;
    int b = *(const int *)e2;
    return (a>b) - (a<b);
}


//写结构体的比较函数，分别比较年龄和名字
//结构体指针->指向成员
//按名字升序
int cmp_stu_name(const void *p1,const void *p2)
{
    //将指针写的清楚好看，重新赋给另一个指针；
    const Students *s1 = (const Students *)p1;
    const Students *s2 = (const Students *)p2;
    return strcmp(s1->name,s2->name);
    //return strcmp(((const Students*)p1)->name,((const Students*)p2)->name);
}

//按年龄降序
int cmp_stu_age(const void *e1,const void *e2)
{
    //优化代码,如果写比较函数，让代码简洁可读性强一点，可以将指针重新赋给一个新的指针，并用这个指针来完成两个元素的比较
    const Students* s1 = (const Students*)e1;
    const Students* s2 = (const Students*)e2;
    return s2->age - s1->age; 
}

//写一个通用的交换函数
void swap(char *p1,char *p2,int size)
{
    //一个字节一个字节的交换，交换的次数取决于元素的大小
    for(int i = 0;i<size;i++)
    {
        char tmp = *p1;
        *p1 =  *p2;
        *p2 = tmp;
        p1++;
        p2++;
    }
}

//写一个整形打印函数
void print(int arr[],int sz)
{
    for(int i = 0;i<sz;i++)
    {
        printf("%d ",arr[i]);
    }
}

//写一个通用的结构体打印函数
void print_Students(Students stu[],int len)
{
    for(int i = 0;i<len;i++)
    {
        printf("%s %d %d ",stu[i].name,stu[i].age,stu[i].gpa);
    }
}


//现在设计一个冒泡函数来模拟一下qsort函数，依旧需要四个参数，指向首元素的指针，数组的长度 ，数组中元素的大小，一个比较函数
//冒泡排序的逻辑是一个数组中利用两两相比较，从第一个数开始，按照要求互换，将最大的数一直沉到最后
void bubble_sort(void *base,int sz,int size,int (*cmp)(const void*p1,const void*p2))
{
    for(int i = 0;i<sz-1;i++)
    {
        for(int j = 0;j<sz-1-i;j++)
        {
            //需要一个比较函数来比较arr[j]和arr[j+1]的大小
            //而且要用到冒泡排序的逻辑
            if(cmp((char*)base+j*size,(char*)base+(j+1)*size) > 0)
            {
                //交换函数，因为不知道交换的是整形还是字符型还是结
                //构体型，所以利用字节交换
                swap((char*)base+j*size,(char*)base+(j+1)*size,size);
            }
        }
    }
}

//测试整形数据的打印
void test1()
{
    int arr[] = {1,3,2,5,6,7,4,9};
    int sz = sizeof(arr)/sizeof(arr[0]);
    bubble_sort(arr,sz,sizeof(arr[0]),cmp_int); 
    print(arr,sz);
}

//测试结构体数据的打印
void test2()
{
    Students stu[3] = {{"wangwu",15,3},{"yiyi",16,4},{"titi",14,6}};
    int len = sizeof(stu)/sizeof(stu[0]);
    bubble_sort(stu,len,sizeof(stu[0]),cmp_stu_name);
    print_Students(stu,len);
}


int main()
{
    test1();
    test2();
    return 0;
}