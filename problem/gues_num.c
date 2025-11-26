#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

// void game()
// {
//     int r = rand() % 100 + 1;  // 生成1-100的随机数
//     int a = 0;
    
//     while (1)  // 循环内可重复输入猜测
//     {    
//         printf("请输入猜测的数字：");
//         scanf("%d", &a);  // 输入放在循环内，允许多次输入
//         printf("你输入的数字是：%d\n", a);  // 提示输入的数字
        
//         if (a < r)
//         {
//             printf("小了\n");
//         }
//         else if (a > r)
//         {
//             printf("大了\n");
//         }
//         else
//         {
//             printf("恭喜你，猜对了\n");
//             break;  // 猜对后退出循环
//         }
//     }
// }

// void menu()
// {
//     printf("1.play\n");  
//     printf("2.end\n");
//     printf("请选择：");  
// }

// int main()
// {
//     int c;
//     srand((unsigned int)time(NULL));  // 随机数种子初始化
    
//     do
//     {
//         menu();  // 显示菜单
//         scanf("%d", &c);  
        
//         switch(c)
//         {
//             case 1:
//                 game();  
//                 break;
//             case 2:
//                 printf("游戏结束\n");
//                 break;
//             default:
//                 printf("输入错误，请重新输入\n"); 
//                 break;
//         }
//     } while (c != 2); 

//     return 0;
// }



#include <stdlib.h>
#include <stdio.h>
void menu()
{
    printf("1.paly\n");
    printf("2.end\n");
    return ;
}
void game()
{
    int r = rand() %100 + 1;
    int num = 0;
    while(1)
    {
        printf("请输入一个数\n");
        scanf("%d",&num);
        if(num < r)
        {
            printf("小了\n");
        }
        else if (num > r)
        {
            printf("大了\n");
        }
        else 
        {
            printf("猜对了\n");
            break;
        }
    }
     return ;
}
int main()
{
    srand((unsigned int)time(NULL));
    int c = 0;
    do
    {
        menu();
        scanf("%d",&c);
        switch(c)
        {
           case 1:
           game();
           break;
           case 2:
           break;
           default :
           printf("输入错误\n");
           break;
        }   
    }while(c != 2);
    return 0;
}