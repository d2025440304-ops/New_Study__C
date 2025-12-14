#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d", n);
//
//	return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//    int a = 10000;
//    FILE* pf = fopen("test.txt", "wb");
//    fwrite(&a, 4, 1, pf);//二进制的形式写到文件中
//    fclose(pf);
//    pf = NULL;
//    return 0;
//}
//


//int main()
//{
//	int n = 10;
//	scanf("%d", &n);
//	printf("%d\n", n);
//
//	return 0;
//}
//
//



//int main()
//{
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//读文件
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//int main()
//{
//	//打开文件
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//写文件
//	//fputc('a', pf);
//	//fputc('b', pf);
//	//fputc('c', pf);
//
//	char ch = 0;
//	for (ch = 'a'; ch <= 'z'; ch++)
//	{
//		fputc(ch, pf);
//	}
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//
//int main()
//{
//	//打开文件
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//读文件
//	int ch = fgetc(pf);
//	printf("%c\n", ch);
//
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//int main()
//{
//	//打开文件
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//读文件
//	int ch = 0;
//	while ((ch = fgetc(pf)) != EOF)
//	{
//		printf("%c", ch);
//	}
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//int main()
//{
//	//1. 打开文件
//	FILE*pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//写文件
//	fputs("hello world\n", pf);
//	fputs("hello bit", pf);
//
//
//	//2. 关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


int main()
{
	//1. 打开文件
	FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)
	{
		perror("fopen");
		return 1;
	}
	//读文件
	char arr[20] = {0};

	while (fgets(arr, 20, pf) != NULL)
	{
		printf("%s", arr);
	}


	//2. 关闭文件
	fclose(pf);
	pf = NULL;

	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//struct S
//{
//	char name[20];
//	int age;
//	float score;
//};
//
//int main()
//{
//	struct S s = { "张三", 20, 65.5f };
//	//想把s中的数据存放在文件中
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//写文件 - 是以文本的形式写进去的
//	fprintf(pf, "%s %d %f", s.name, s.age, s.score);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}
//
//
//
//struct S
//{
//	char name[20];
//	int age;
//	float score;
//};
//
//int main()
//{
//	struct S s = { 0 };
//	//想从文件test.txt中读取数据放在s中
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//读文件 
//	fscanf(pf, "%s %d %f", s.name, &(s.age), &(s.score));
//
//	//打印在屏幕上看看
//	//printf("%s %d %f\n", s.name, s.age, s.score);//
//	fprintf(stdout, "%s %d %f\n", s.name, s.age, s.score);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//int main()
//{
//	fputc('a', stdout);
//	return 0;
//}

//
//struct S
//{
//	char name[20];
//	int age;
//	float score;
//};
//
//
//int main()
//{
//	char buf[200] = { 0 };
//	struct S s = { "张三", 20, 65.5f };
//	sprintf(buf, "%s %d %f", s.name, s.age, s.score);
//
//	printf("1以字符串的形式: %s\n", buf);//1
//
//	struct S t = {0};
//	sscanf(buf, "%s %d %f", t.name, &(t.age), &(t.score));
//	printf("2按照格式打印  : %s %d %f\n", t.name, t.age, t.score);//2
//
//	return 0;
//}


//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//
//	FILE*pf = fopen("test.txt", "wb");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//写数据
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	fwrite(arr, sizeof(arr[0]), sz, pf);//以二进制的形式写进去的
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//以二进制的形式读取
//
//int main()
//{
//	int arr[5] = {0};
//
//	FILE* pf = fopen("test.txt", "rb");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//读数据
//	fread(arr, sizeof(arr[0]), 5, pf);//以二进制的形式写进去的
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr[i]);//1 2 3 4 5
//	}
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}
//

//int main()
//{
//	int arr[5] = { 0 };
//
//	FILE* pf = fopen("test.txt", "rb");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//读数据-以二进制的形式写进去的
//	int i = 0;
//	while (fread(&arr[i], sizeof(int), 1, pf))
//	{
//		printf("%d ", arr[i]);
//		i++;
//	}
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//读文件
//	int ch = fgetc(pf);
//	printf("%c\n", ch);//a
//
//	//fseek(pf, 4, SEEK_CUR);
//	//fseek(pf, 5, SEEK_SET);
//	fseek(pf, -4, SEEK_END);
//
//	ch = fgetc(pf);
//	printf("%c\n", ch);//f
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//读文件
//	int ch = fgetc(pf);
//	printf("%c\n", ch);//a
//	//fseek(pf, -4, SEEK_END);
//	fseek(pf, 0, SEEK_END);
//	printf("%d\n", ftell(pf));
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//读文件
//	int ch = fgetc(pf);
//	printf("%c\n", ch);//a
//	fseek(pf, -4, SEEK_END);
//	ch = fgetc(pf);
//	printf("%c\n", ch);//f
//
//	rewind(pf);
//	ch = fgetc(pf);
//	printf("%c\n", ch);//a
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//读取
//	int ch = 0;
//	while ((ch = fgetc(pf)) != EOF)
//	{
//		printf("%c\n", ch);
//	}
//	//判断是什么原因导致读取结束的
//	if (feof(pf))
//	{
//		printf("遇到文件末尾，读取正常结束\n");
//	}
//	else if (ferror(pf))
//	{
//		perror("fgetc");
//	}
//
//	return 0;
//}


//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//写
//	char ch = 0;
//	for (ch = 'a'; ch <= 'z'; ch++)
//	{
//		fputc(ch, pf);
//	}
//
//	//判断是什么原因导致读取结束的
//	if (feof(pf))
//	{
//		printf("遇到文件末尾，读取正常结束\n");
//	}
//	else if (ferror(pf))
//	{
//		perror("fputc");
//	}
//
//	return 0;
//}


//拷贝文件:test1.txt  ---> test2.txt
//int main()
//{
//	FILE* pfin = fopen("test1.txt", "r");
//	if (pfin == NULL)
//	{
//		perror("fopen:test1.txt");
//		return 1;
//	}
//	FILE* pfout = fopen("test2.txt", "w");
//	if (pfout == NULL)
//	{
//		fclose(pfin);
//		perror("fopen:test2.txt");
//		return  1;
//	}
//	//读文件和写文件
//	int ch = 0;
//	while ((ch=fgetc(pfin)) != EOF)
//	{
//		fputc(ch, pfout);
//	}
//	//
//	fclose(pfin);
//	pfin = NULL;
//	fclose(pfout);
//	pfout = NULL;
//
//	return 0;
//}




//
//
//int main()
//{
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//写
//	char ch = 0;
//	for (ch = 'a'; ch <= 'z'; ch++)
//	{
//		fputc(ch, pf);
//	}
//
//	//判断是什么原因导致读取结束的
//	if (feof(pf))
//	{
//		printf("遇到文件末尾，读取正常结束\n");
//	}
//	else if (ferror(pf))
//	{
//		perror("fputc");
//	}
//
//	return 0;
//}


//#include <stdio.h>
//#include <windows.h>
//
////VS2022 WIN11环境测试
//int main()
//{
//    FILE* pf = fopen("test.txt", "w");
//    fputs("abcdef", pf);//先将代码放在输出缓冲区
//
//    printf("睡眠10秒-已经写数据了，打开test.txt文件，发现文件没有内容\n");
//    Sleep(10000);
//    printf("刷新缓冲区\n");
//    fflush(pf);//刷新缓冲区时，才将输出缓冲区的数据写到文件（磁盘）
//
//    //注：fflush 在高版本的VS上不能使用了
//    printf("再睡眠10秒-此时，再次打开test.txt文件，文件有内容了\n");
//    Sleep(10000);
//
//
//    fclose(pf);
//    //注：fclose在关闭文件的时候，也会刷新缓冲区
//    pf = NULL;
//
//    return 0;
//}
//

extern int Add(int, int);

int main()
{
	//printf("hehe\n");
	int a = 10;
	int b = 20;
	int c = Add(a, b);
	printf("%d\n", c);

	return 0;
}

