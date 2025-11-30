 #include <stdio.h>

// 核心函数：将十进制数 num 打印为 P 进制
void print_in_base(int num, int P) {
    if (num == 0) return;
    
    // 递归处理高位（短除法）
    print_in_base(num / P, P);
    
    // 处理当前位（取余）
    int digit = num % P;
    if (digit < 10) {
        printf("%d", digit);
    } else {
        // 如果大于等于10，转换为大写字母
        // 'A' 的 ASCII 是 65，10 对应 'A'，所以是 'A' + (digit - 10)
        printf("%c", 'A' + (digit - 10));
    }
}

int main() {
    int P;
    scanf("%d", &P);

    // 题目输入 P，乘法表通常是从 1 到 P-1
    for (int i = 1; i < P; i++) {
        for (int j = 1; j <= i; j++) {
            // 1. 打印乘数 i (转进制)
            // 注意：当i<P时，i在P进制下就是它自己，但为了严谨可以用转换函数
            // 这里因为 i 和 j 肯定小于 P，直接打印数字即可（除非 P > 10，那么i,j也要变字母）
            if (i < 10) printf("%d", i); else printf("%c", 'A' + i - 10);
            
            printf("*");
            
            if (j < 10) printf("%d", j); else printf("%c", 'A' + j - 10);
            
            printf("=");
            
            // 2. 打印结果 (必须转进制)
            int result = i * j;
            print_in_base(result, P);
            
            // 3. 格式控制：每行最后一项后面不要空格（可选），或者直接加空格
            printf(" ");
        }
        // 每一行结束换行
        printf("\n");
    }

    return 0;
}