#include <stdio.h>

int main() {
    double a, b;
    char op;
    // 注意：可能有负数？但样例均为正数，且格式为 a op b 无空格
    // 使用 scanf 尝试读取
    if (scanf("%lf%c%lf", &a, &op, &b) != 3) {
        printf("输入的运算符错误\n");
        return 0;
    }

    double result;
    switch (op) {
        case '+':
            result = a + b;
            break;
        case '-':
            result = a - b;
            break;
        case '*':
            result = a * b;
            break;
        case '/':
            if (b == 0) {
                printf("输入的运算符错误\n");
                return 0;
            }
            result = a / b;
            break;
        default:
            printf("输入的运算符错误\n");
            return 0;
    }

    printf("%.2f%c%.2f=%.2f\n", a, op, b, result);
    return 0;
}