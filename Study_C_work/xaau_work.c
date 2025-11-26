#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d,%d", &a, &b);
//	if (a < b)
//	{
//		printf("%d,%d", a, b);
//	}
//	else
//	{
//		printf("%d,%d", b, a);
//	}
//	return 0;
//}
//int main()
//{
//    int a = 0;
//    scanf("%d", &a);
//    if (a % 4 == 0)
//    {
//        printf("yes\n");
//    }
//    else
//    {
//        printf("no\n");
//    }
//    return 0;
//}
#include <stdio.h>

//int main()
//{
//    int a = 0;
//    int b = 0;
//    int c = 0;
//    scanf("%d,%d,%d", &a, &b, &c);
//
//    if (a > b && a > c)
//    {
//        printf("锟斤拷锟街滴?%d\n", a);
//    }
//    else if (b > a && b > c)
//    {
//        printf("锟斤拷锟街滴?%d\n", b);
//    }
//    else
//    {
//        printf("锟斤拷锟街滴?%d\n", c);
//    }
//
//    return 0; 
//}
    // int main() 
    // {

    //    double num1, num2, num3, num4;

    
    //    scanf("%lf,%lf,%lf,%lf", &num1, &num2, &num3, &num4);

    //    if (num1 > num2) { double temp = num1; num1 = num2; num2 = temp; }
    //    if (num2 > num3) { double temp = num2; num2 = num3; num3 = temp; }
    //    if (num3 > num4) { double temp = num3; num3 = num4; num4 = temp; }

     
    //    if (num1 > num2) { double temp = num1; num1 = num2; num2 = temp; }
    //    if (num2 > num3) { double temp = num2; num2 = num3; num3 = temp; }
    //    if (num1 > num2) { double temp = num1; num1 = num2; num2 = temp; }

    //    printf("锟斤拷小锟斤拷锟斤拷锟剿筹拷锟轿?%.1f,%.1f,%.1f,%.1f\n", num1, num2, num3, num4);

    //    return 0;
    // }
// int main()
// {
//    char a;
//    scanf("%c", &a);
//    if (a >= 65 && a <= 90)
//    {
//        printf("小写锟斤拷母为%c\n", a+32);
//    }
//    else
//    {
//        printf("锟斤拷转锟斤拷,为%c\n", a);
//    }
//    return 0;
// }
//int main()
//{
//    int x = 0;
//    int y = 0;
//    scanf("%d", &x);
//    if (x < 0)
//    {
//        printf("y=-1\n");
//    }
//    else if (x == 0)
//    {
//        printf("y=0\n");
//    }
//    else if (x > 0)
//        printf("y=1\n");
//    return 0;
//}
// int main()
// {
//     double x = 0;
//     double y = 0;
//     scanf("%lf", &x);
//     if (x < 1)
//     {
//         printf("x=%.0lf,y=%.0lf", x, y);
//     }
//     else if (x >= 1 && x < 10)
//     {
//         printf("x=%.0lf,y=%.0lf", x, 2 * x - 1);
//     }
//     else if (x >= 10)
//     {
//         printf("x=%.0lf,y=%.0lf", x, 3 * x - 11);
//     }
//     return 0;
// }
//int main()
//{
//    int a = 0;
//    scanf("%d", &a);
//    if (a >= 90 && a <= 100)
//    {
//        printf("A\n");
//    }
//    else if (a <= 89 && a >= 80)
//    {
//        printf("B\n");
//    }
//    else if (a <= 79 && a >= 70)
//    {
//        printf("C\n");
//    }
//    else if (a <= 69 && a >= 60)
//    {
//        printf("D\n");
//    }
//    else if (a<=60 && a>=0)
//    {
//        printf("E\n");
//    }
//    else if (a > 100 || a < 0)
//    {
//        printf("error\n");
//    }
//    return 0;
//
//}
// int main()
// {
//     char ch1;
//     scanf("%c", &ch1);
    
//     if (ch1 == 'A')
//     {
//         printf("90-100\n");
//     }
//     else if (ch1 == 'B')
//     {
//         printf("80-89\n"); 
//     }
//     else if (ch1 == 'C')
//     {
//         printf("70-79\n");  
//     }
//     else if (ch1 == 'D')
//     {
//         printf("60-69\n");
//     }
//     else if (ch1 == 'E')
//     {
//         printf("0-60\n");
//     }
//     else 
//     {
//         printf("error\n");
//     }
//     return 0;
// }
// #include <math.h>
// int main ()
// {
//     double a,b,c;
//     scanf("%lf,%lf,%lf",&a,&b,&c);
//     double delta = b*b-4*a*c;
//     double x1 , x2;
//     if (a == 0)
//     {
//         printf("锟斤拷锟斤拷一元锟斤拷锟轿凤拷锟斤拷\n");
//     }
//     else if (delta == 0)
//     {
//         x1 = - b / (2 * a);
//         printf("锟斤拷锟斤拷锟斤拷锟斤拷鹊锟绞碉拷锟斤拷锟?%.2lf\n",x1); 
//     {
//         x1 = (-b + sqrt(delta)) / (2 * a);
//         x2 = (-b - sqrt(delta)) / (2 * a);
//         printf("x1=%.2lf,x2=%.2lf\n",x1,x2);
//     }
        
//     else 
//     {
//          double realPart, imagPart;  
//         realPart = -b / (2 * a);
//         imagPart = sqrt(-delta) / (2 * a);
//         printf("%.2lf+%.2lfi\n", realPart, imagPart);
//         printf("%.2lf-%.2lfi\n", realPart, imagPart);
//     }
//     return 0;
// }
// int main()
// {
//     int i ;
//     for(i=101;i<=200;i += 3)
//     {
//         int k;
//         int flag = 1;
//         for(k=2;k<=i-1;k++)
//         {
//             if(i %k == 0)
//             {
//                 flag = 0;
//                 break;
//             }
//         }
//         if (flag == 1)
//         {
//             printf("%d ",i);
//         }
//     }
//      return 0 ;
// }
// #include <stdio.h>

// #include <stdio.h>

// int main()
//  {
//     float p, w, s;
//     float d = 0.0;  
//     scanf("%f,%f,%f", &p, &w, &s);
//     if (s >= 3000) {
//         d = 0.15;
//     } else if (s >= 2000) {
//         d = 0.10;
//     } else if (s >= 1000) {
//         d = 0.08;
//     } else if (s >= 500) {
//         d = 0.05;
//     } else if (s >= 250) {
//         d = 0.02;
//     }  
//     float f = p * w * s * (1 - d);
//     printf("总运费为%.2f\n", f);
//     return 0;
// }
// int main()
// {
//     float p,d;
//     int range = 0 ;
//     scanf("%f",&p);
//     if(p<500)
//     {
//         range = 1;
//     }
//     else if (p>=500 && p < 2000)
//     {
//         range = 2;
//     }
//     else if (p>=2000 && p < 5000)
//     {
//         range  = 3;
//     }
//     else if(p>=5000)
//     {
//          range = 4;
//     }
//     switch(range)
//     {
//         case 1 :
//           d = 0;
//           break;
//         case 2:
//           d = 0.05;
//           break;
//         case 3:
//           d = 0.10;
//           break;
//         case 4:
//           d = 0.15;
//           break;
//     }
//       printf("%.2f,%.2f",d,p*(1-d));
//     return 0;
// }
// int main()
// {
//   int a ;
//   scanf("%d",&a);
//   if (a %2 == 0)
//   {
//     printf("even");
//   }
//   else
//   {
//     printf("odd");
//   }
//   return 0;
// }
// #include <stdio.h>
// #include <stdio.h>

// int main() {
//     double x, y;
    
//     // 读取输入的总价，保留2位小数
//     scanf("%lf", &x);
    
//     // 根据不同区间计算折扣后价格
//     if (x < 1000) {
//         y = x;
//     } else if (x < 2000) {
//         y = 0.9 * x;
//     } else if (x < 3000) {
//         y = 0.8 * x;
//     } else {
//         y = 0.7 * x;
//     }
    
//     // 输出结果，保留2位小数
//     printf("%.2f\n", y);
    
//     return 0;
// }
// #include <stdio.h>

// // 函数声明：输出三个数中的最大值和最小值
// void max(int x, int y, int z) {
//     int max_val, min_val;
    
//     // 求最大值
//     if (x >= y && x >= z) {
//         max_val = x;
//     } else if (y >= x && y >= z) {
//         max_val = y;
//     } else {
//         max_val = z;
//     }
    
//     // 求最小值
//     if (x <= y && x <= z) {
//         min_val = x;
//     } else if (y <= x && y <= z) {
//         min_val = y;
//     } else {
//         min_val = z;
//     }
    
//     printf("%d,%d", max_val, min_val);
// }

// int main() {
//     int a, b, c;
//     // 输入三个整数
//     scanf("%d,%d,%d", &a, &b, &c);
//     // 调用函数输出最大值和最小值
//     max(a, b, c);
//     return 0;
// }
// #include <stdio.h>

// int main() {
//     float a, b;
//     char op;
    
//     // 读取两个数值（格式为"a,b"）
//     scanf("%f,%f", &a, &b);
//     // 读取换行符（清除缓冲区）
//     getchar();
//     // 读取菜单选项
//     scanf("%c", &op);
    
//     // 使用switch语句处理不同选项
//     switch(op) {
//         case 'A':
//         case 'a':  // 处理加法（A和a都触发）
//             printf("%.0f+%.0f=%.0f\n", a, b, a + b);
//             break;
//         case 'B':
//         case 'b':  // 处理减法（B和b都触发）
//             printf("%.0f-%.0f=%.0f\n", a, b, a - b);
//             break;
//         default:   // 处理无效选项
//             printf("error\n");
//             break;
//     }
    
//     return 0;
// }


// int main() 
// {
//     double a, b;
//     char op;
    
//     // 读取输入的表达式（格式：a运算符b）
//     int ret = scanf("%lf%c%lf", &a, &op, &b);
    
//     // 检查输入格式是否正确
//     if (ret != 3) {
//         printf("输入的运算符错误\n");
//         return 0;
//     }
    
//     // 根据运算符进行相应计算
//     switch (op) {
//         case '+':
//             printf("%.2f+%.2f=%.2f\n", a, b, a + b);
//             break;
//         case '-':
//             printf("%.2f-%.2f=%.2f\n", a, b, a - b);
//             break;
//         case '*':
//             printf("%.2f*%.2f=%.2f\n", a, b, a * b);
//             break;
//         case '/':
//             printf("%.2f/%.2f=%.2f\n", a, b, a / b);
//             break;
//         default:
//             // 处理不支持的运算符
//             printf("输入的运算符错误\n");
//             break;
//     }
    
//     return 0;
// }
// int main()
// {
//     int cnt = 0;
//     int num = 0;
//     scanf("%d",&num);
//       if (num > 9999 || num <=0)
//     {
//         printf("输入的数值不符合要求\n");
//         return  0 ;
//     }
//     int original = num ;
//     int temp = num ;
//     do
//     {
//         temp = temp/10 ;
//         cnt++;
//     }
//     while(temp != 0 );
//     int a = (original/1000) %10;
//     int b = (original/100)  %10;
//     int c = (original/10)   %10;
//     int d =original %10;
  
//      if (cnt==4)
//      {
//          printf("位数n=%d\n",cnt);
//          printf("正序输出为%d%d%d%d\n",a,b,c,d);
//          printf("反序输出为%d%d%d%d\n",d,c,b,a);
//     }
//      else if (cnt==3)
//      {
//          printf("位数n=%d\n",cnt);
//          printf("正序输出为%d%d%d\n",b,c,d);
//          printf("反序输出为%d%d%d\n",d,c,b);
//     }
//      else if (cnt==2)
//      {
//          printf("位数n=%d\n",cnt);
//          printf("正序输出为%d%d\n",c,d);
//          printf("反序输出为%d%d\n",d,c);
//     }
//     else if (cnt==1)
//      {
//          printf("位数n=%d\n",cnt);
//          printf("正序输出为%d\n",d);
//          printf("反序输出为%d\n",d);
//     }
//     return 0;
// }
// #include <stdio.h>

// int main() {
//     int a, b, c;

//     scanf("%d,%d,%d", &a, &b, &c);
    

//     if (a + b > c && a + c > b && b + c > a) 
//     {
   
//         if (a == b && b == c) {
      
//             printf("构成等边三角形\n");
//         } else if (a == b || a == c || b == c) {

//             printf("构成等腰三角形\n");
//         } else {

//             printf("能构成三角形\n");
//         }
//     } else {

//         printf("不能构成三角形\n");
//     }
    
//     return 0;
// }
// int main()
// {
//     int sum = 0;
//     int n = 1;
//     while(n<101)
//     {
//         sum += n;
//         n++;
//     }
//     printf("%d\n",sum);
//     return 0;
// }
// int main()
// {
//     int sum = 1;
//     int n = 0;
//     scanf("%d",&n);
//     for(int i = n ;i>=1;i--)
//     {
//         sum *= i;
//     }
//     printf("%d\n",sum);
//     return 0;
// }
// int main()
// {
//     int a1 = 1;
//     int a2 = 1;
//     int a3;
//     for(int i = 3;i<=12;i++)
//     {
//         a3 = a1 + a2;
//         a1 = a2;
//         a2 = a3;
//     }
//     printf("%d\n",a3);
//     return 0;
// }
// int main()
// {
//     double sum = 0.0;
//     double num = 1.0;
//     for(int i = 1;i <= 10;i++)
//     {
//         num *= i;
//         sum += num;
//     }
//     printf("%.1f\n",num);
//     return 0;
// }
// int main()
// {
//     int n = 0;//计数器思想
//     for(int i = 2;i<=100;i+=2)
//     {
//         printf("%-4d",i);
//         n++;
//        if(n %5 == 0)
//     {
//         printf("\n");
//     }
//     }

//     return 0;
// }
// int main()
// {
//     for(int i = 1;i<=3;i++)
//     {
//         for(int j = 1;j<=i;j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
//     for(int i = 2;i>=1;i--)
//     {
//         for(int j =1;j<=i;j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }
// #include <stdio.h>

// int main() {
//     int n = 7;
//     for (int i = 1; i <= n; i += 2) {
//         int spaces = (n - i) / 2;
//         for (int j = 0; j < spaces; j++) {
//             printf(" ");
//         }
//         for (int j = 0; j < i; j++) {
//             printf("*");
//         }
//         printf("\n");
//     }
//     for (int i = n - 2; i >= 1; i -= 2) {
//         int spaces = (n - i) / 2;
//         for (int j = 0; j < spaces; j++) {
//             printf(" ");
//         }
//         for (int j = 0; j < i; j++) {
//             printf("*");
//         }
//         printf("\n");
//     }
    
//     return 0;
// }
// int gcd (int x,int y)
// {
//     while(y)
//     {
//         int temp = y;
//         y = x %y;
//         x = temp;
//     }
//     return x;
// }
// int main()
// {
//     int m,n;
//     scanf("%d,%d",&m,&n);
//     int r =  gcd(m,n);
//     int q =m*n/r;
//     printf("最大公约数是%d\n",r);
//     printf("最小公倍数是%d\n",q);
//     return 0;
// }
// int main()
// {
//     int first = 1;
//     for(int i = 100;i<=999;i++)
//     {
//         int a = i/100;
//         int b = (i/10)%10;
//         int c = i %10;
//         if(a*a*a+b*b*b+c*c*c == i)
//         {
//             if(!first)
//             {
//                 printf(" ");
//             }
//             printf("%d",i);
//             first = 0;
//         }
//     }
//     return 0;
// }