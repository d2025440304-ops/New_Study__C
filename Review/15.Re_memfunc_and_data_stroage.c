#include <stdio.h>
#include <string.h>
#include <assert.h>
 
//memcpy 内存拷贝函数(void *,void *,size_t)当遇到内存重叠的时候最好不要用

//memmove 也相当于内存拷贝函数，(void *,void *,size_t
//不过可以处理带有重叠内存的拷贝，拷贝方式，前前后后，
//size_t是拷贝的字节数

//memset 内存初始化函数，(void *,int value,int),放置位置起始指针
//要放置的元素，多少个字节，注意，此函数放置整形会失效，除非是0，因为是按字节放置
//每一个字节都是放置元素，而整形四个字节，或者不是一个字节都会导致放置内容不对
//究其原因是给每一个字节都赋值，所以不对