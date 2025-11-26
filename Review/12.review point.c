#include <stdio.h>
函数指针数组
// int Add(int x, int y)
// {
// 	return x + y;
// }

// int Sub(int x, int y)
// {
// 	return x - y;
// }

// int Mul(int x, int y)
// {
// 	return x * y;
// }

// int Div(int x, int y)
// {
// 	return x / y;
// }
// 指向上方函数的函数指针类型就是int (*)(int,int)、
// 函数指针数组 写法；函数返回类型+(*数组名[])+(函数指针的参数类型) = {所有函数指针}；
// 其实函数指针数组里存放的就是函数，因为函数退化成了指针
// typedef int(*pf_arr[4])(int,int);//重命名一个函数指针数组，类型时pf_arr
// 此时的pf_arr就和int,char一样的作用
// int main()
// {
//     int (*pf1)(int,int) = Add;//pf1指向Add函数，在调用时pf1=Add
//     pf_arr pfarr = {Add,Sub,Mul,Div}; //pfarr是函数指针数组类型，其中存放的都是函数指针
//     int sz = sizeof(pfarr)/sizeof(pfarr[0]);
//     for(int i = 0;i<sz;i++)
//     {
//         printf("%d\n",pfarr[i](3,5));
//     }
//     return 0;
// }

//计算器
//完成整数的加减乘除
// int Add(int x, int y)
// {
// 	return x + y;
// }

// int Sub(int x, int y)
// {
// 	return x - y;
// }

// int Mul(int x, int y)
// {
// 	return x * y;
// }

// int Div(int x, int y)
// {
// 	return x / y;
// }
// void menu()
// {
//     printf("***************************\n");
// 	printf("****  1. add  2. sub   ****\n");
// 	printf("****  3. mul  4. div   ****\n");
// 	printf("****     0. exit          ****\n");
// 	printf("***************************\n");
// }
// int main()
// {
//     int input = 0;
//     int x,y,z;
//     do
//     {
//         menu();
//         printf("请选择：");
//         scanf("%d",&input);
//         switch(input)
//         {
// 		case 1:
// 			printf("请输入两个操作数:");
// 			scanf("%d %d", &x, &y);
// 			z = Add(x, y);
// 			printf("%d\n", z);
// 			break;
// 		case 2:
// 			printf("请输入两个操作数:");
// 			scanf("%d %d", &x, &y);
// 			z = Sub(x, y);
// 			printf("%d\n", z);
// 			break;
// 		case 3:
// 			printf("请输入两个操作数:");
// 			scanf("%d %d", &x, &y);
// 			z = Mul(x, y);
// 			printf("%d\n", z);
// 			break;
// 		case 4:
// 			printf("请输入两个操作数:");
// 			scanf("%d %d", &x, &y);
// 			z = Div(x, y);
// 			printf("%d\n", z);
// 			break;
// 		case 0:
// 			printf("退出计算器\n");
// 			break;
// 		default:
// 			printf("选择错误\n");
// 			break;               
//         }
//     }while(input);
// }



// int Add(int x, int y)
// {
// 	return x + y;
// }

// int Sub(int x, int y)
// {
// 	return x - y;
// }

// int Mul(int x, int y)
// {
// 	return x * y;
// }

// int Div(int x, int y)
// {
// 	return x / y;
// }

// int main()
// {
    
//     return 0;
// }
// void menu()
// {
// 	printf("***************************\n");
// 	printf("****  1. add  2. sub   ****\n");
// 	printf("****  3. mul  4. div   ****\n");
// 	printf("****  0. exit          ****\n");
// 	printf("***************************\n");
// }
// typedef int(*pf_arr[5])(int,int);//pf_arr是函数指针数组类型
// //函数指针数组-转移表
// int main()
// {
//     int x,y,z;
//     int input = 0;
//     pf_arr pfarr = {0,Add,Sub,Mul,Div};
//     do
//     {
//         printf("请选择");
//         scanf("%d",&input);
//         if(input>=1 && input<=4)
//         {
//             printf("请输入两个操作数:");
//             scanf("%d %d",&x,&y);
//             int r = pfarr[input](x,y);
//             printf("%d\n",r);
//         }
//         else if (input == 0)
//         {
//             printf("退出计算器\n");
//         }
//         else
//         {
//             printf("输入错误，请重新输入");
//         }
//     }    while(input);
//     return 0;
// }



// int Add(int x, int y)
// {
// 	return x + y;
// }

// int Sub(int x, int y)
// {
// 	return x - y;
// }

// int Mul(int x, int y)
// {
// 	return x * y;
// }

// int Div(int x, int y)
// {
// 	return x / y;
// }

// void menu()
// {
// 	printf("***************************\n");
// 	printf("****  1. add  2. sub   ****\n");
// 	printf("****  3. mul  4. div   ****\n");
// 	printf("****  0. exit          ****\n");
// 	printf("***************************\n");
// }

// void calc(int (*fun)(int,int))//形参是函数指针，实参就传相同类型的函数
// {
//     int x,y,z;
//     scanf("%d %d",&x,&y);
//     z = fun(x,y);//如果写add的，只能是add，如果写fun，可以是任何同类型的函数，进而完成函数回调
//     printf("%d\n",z);
// }

// int main()
// {
//     int input = 0;
//     do
//     {
//         menu();
//         printf("请输入");
//         scanf("%d",&input);
//         switch(input)
//         {
//             case 1:
//                 calc(Add);
//                 break;
//             case 2:
//                 calc(Sub);
//                 break;
//             case 3:
//                 calc(Mul);
//                 break;
//             case 4:
//                 calc(Div);
//                 break;
//             case 0:
//                 printf("退出\n");
//                 break;
//             default:
//                 printf("输入错误,重新输入\n");
//         }
//     } while(input);
//     return 0;
// }
