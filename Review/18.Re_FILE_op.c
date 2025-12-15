#include <stdio.h>
// int main()
// {
//     //fopen有一个返回值，每次打开文件就会有一个文件信息，用一个 FILE 指针来指向这个文件信息
//     //流的概念
//     //流是一个在用户的与键盘，网络，硬盘，屏幕之间来更好的帮助程序员来处理这些
    
//     //打开文件
//     FILE * pf = fopen("test.txt","w");
//     if(pf == NULL)
//     {
//         perror("fopen");
//         return 1;
//     }
//     //操作文件
//     while((fgetc(pf)) != EOF)
//     {
//             ;
//     }


//     fclose(pf);
//     pf = NULL;
//     return 0;
// }


//数据如果在硬盘中存储，是不会销毁的，而如果在内存中存储，当程序结束时数据便会销毁

// int main()
// {
//     int a = 10000;
//     //打开文件
//     FILE * pf = fopen("test.txt","wb");
//     //检查
//     if(pf == NULL)
//     {
//         perror("fopen:");
//     }
//     //写文件
//     fwrite(&a,4,1,pf);//以二进制的形式写入文件中
//     //关闭文件
//     fclose(pf);
//     pf = NULL;

//     return 0;
// }


// int main()
// {
//     //打开文件
//     FILE *pf = fopen("text.txt","w");
//     //判断文件
//     if(pf == NULL)
//     {
//         perror("fopen:");
//         return 1;
//     }
//     //写入文件
//     //int putc(int character,FILE* stream)
//     //文件流
//     putc('a',pf);
//     putc('b',pf);
//     for(int i = 'a';i<'z';i++)
//     {
//         putc(i,pf);
//     }
//     return 0;
// }


//  读取和写入是相对于流这个概念的
//  在标准流中，写入；标准输入流是从键盘中，读取；标准输出流是在屏幕中打印
//  在文件流中，写入；从程序中写入到指定文件中  读取；从文件中读取到当前程序
//  写入函数    int fputc(int c ,FILE*stream)   int fputs(char *,FILE*)   fprintf
//  读取函数    int fgetc(FILE* stream)   int fgets(char *,int num,FILE*)   fscanf


// int main()
// {
//     //打开文件
//     FILE * pf = fopen("text.txt","r");
//     //检查文件
//     if(pf == NULL)
//     {
//         perror("fopen");
//         return 1;
//     }
//     //读取文件
//     int ch = 0;
//     //fgetc函数的返回值用int来接收，如果读取失败，返回EOF即是-1
//     //读取函数是自动有光标指针来移动的
//     //当读取函数的返回值不是-1时，就一直读取，fgetc函数返回类型
//     while(  (ch = fgetc(pf)) != EOF)
//     {
//         printf("%c",ch);
//     }

//     //关闭文件；
//     fclose(pf);
//     pf = NULL;
//     return 0;
// }

// struct S
// {
//     char name [20];
//     int age;
//     float gpa;
// };
// int main()
// {
//     struct S s = {"张三",20,65.5f};
//     //把s的数据放到文件中
//     //打开文件
//     FILE * pf = fopen("text.txt","w");
//     if(pf == NULL)
//     {
//         perror("fopen");
//         return 1;
//     }
//     //写文件
//     fprintf(pf,"%s,%d,%f",s.name,s.age,s.gpa);

//     //关闭文件
//     fclose(pf);
//     pf = NULL;
//     return 0;
// }

// struct S
// {
//     char name [20];
//     int age;
//     float gpa;
// };
// int main()
// {
//     struct S s = {"张三",20,65.5f};
//     //把文件中的s读取到程序中
//     //打开文件
//     struct S t = {0};
//     FILE * pf = fopen("text.txt","r");
//     if(pf == NULL)
//     {
//         perror("fopen");
//         return 1;
//     }
//     //读文件
//     //将pf里的数据读取到结构体中
//     //指定读取流，从文件读取到程序中
//     fscanf(pf,"%s %d %f",t.name,&(t.age),&(t.gpa));
//     printf("%s %d %f",t.name,t.age,t.gpa);
//     fprintf(stdout,"%s %d %f",s.name,s.age,s.gpa);
//     //关闭文件
//     fclose(pf);
//     pf = NULL;
//     return 0;
// }


//printf,fprintf,sprintf
//scanf,fscanf,sscanf
//printf;写入到标准输出流屏幕上 fprintf;写入到从指定输出流  sprintf；将格式化数据转变成字符串中
//scanf；从标准读入流键盘中读取 fscanf；从指定输入流中读取  sscanf；将字符串转变成格式化数据

// struct S
// {
//     char name[20];
//     int age;
//     float gpa;
// };

// int main()
// {
//     char buf[200] = {0};
//     //格式化数据
//     struct S s = {"zzz",19,65.5f};
//     //将格式化数据转变成字符串，写入到字符串中
//     sprintf(buf,"%s %d %f",s.name,s.age,s.gpa);
//     printf("%s\n",buf);

//     //将字符串读取到格式化数据中
//     struct S t = {0};
//     sscanf(buf,"%s %d %f",t.name,t.age,t.gpa);
//     printf("%s %d %f\n",t.name,t.age,t.gpa);

//     return 0;
// }


//以二进制写入和读取文件

// int main()
// {
//     int arr[] = {1,2,3,4,5};
//     //打开文件
//     FILE *pf = fopen("text.txt","wb");
//     if(pf == NULL)
//     {
//         perror("fopen");
//         return 1;
//     }
//     size_t sz =sizeof(arr)/sizeof(arr[0]);
//     // size_t fwrite ( const void * ptr, size_t size, size_t count, FILE * stream );
//     //第一个为指针，第二个为元素大小，第三个为元素个数，第四个为指针
//     fwrite(arr,sizeof(arr[0]),sz,pf);
//     //存到文本是以二进制的形式，小段字节序存放，低位放到低地址
//     fclose(pf);
//     pf == NULL;
//     return 0;
// }

// int main()
// {
//     int str[8] = {0};
//     //打开文件                  wb 写二进制 rb 读二进制
//     FILE *pf = fopen("text.txt","rb");
//     if(pf == NULL)
//     {
//         perror("fopen");
//         return 1;
//     }
//     // size_t fread ( const void * ptr, size_t size, size_t count, FILE * stream );
//     //第一个为指针，第二个为元素大小，第三个为元素个数，第四个为指针
//     fread(str,sizeof(int),5,pf);
//     for(int i = 0;i<5;i++)
//     {
//         printf("%d ",str[i]);
//     }
//     int i = 0;
//     while(fread(&str[i],sizeof(int),8,pf))
//     {
//         printf("%d ",str[i]);
//         i++;
//     }
//     fclose(pf);
//     pf == NULL;
//     return 0;
// }

// int main()
// {
//     FILE*pf = fopen("text.txt","r");
//     if(pf == NULL)
//     {
//         perror("fopen");
//         return 1;
//     }
//     // int ch = fgetc(pf);
//     // printf("%c\n",ch);
//     //int fseek ( FILE * stream, long int offset, int origin );
//     // fseek(pf,4,SEEK_CUR);
//     fseek(pf,5,SEEK_SET);
//     int ch = fgetc(pf);
//     printf("%c\n",ch);

//     fclose(pf);
//     pf == NULL;

//     return 0;
// }


// int main()
// {
// 	FILE* pf = fopen("test.txt", "r");
// 	if (pf == NULL)
// 	{
// 		perror("fopen");
// 		return 1;
// 	}
// 	//读取
// 	int ch = 0;
// 	while ((ch = fgetc(pf)) != EOF)
// 	{
// 		printf("%c\n", ch);
// 	}
// 	//判断是什么原因导致读取结束的
// 	if (feof(pf))//feof判断的是文件是否遇到文件末尾
// 	{
// 		printf("遇到文件末尾，读取正常结束\n");
// 	}
// 	else if (ferror(pf))
// 	{
// 		perror("fgetc");
// 	}

// 	return 0;
// }


//拷贝文件 text.txt ----> text.txt
// int main()
// {
//     FILE* pf = fopen("text.txt","r");

//     if(pf == NULL)
//     {
//         perror("fopen");
//         return 1;
//     }

//     FILE* pf1 = fopen("test.txt","a");
//     if(pf1 ==NULL)
//     {
//         perror("fopen");
//         return 1;
//     }

//     //读文件和写文件
//     int ch = 0;
//     while((ch=fgetc(pf)) != EOF)
//     {
//         fputc(ch,pf1);
//     }
//     fclose(pf);
//     pf = NULL;
//     fclose(pf1);
//     pf1 = NULL;
//     return 0;
// }

