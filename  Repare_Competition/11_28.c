#include <stdio.h>
#include <stdlib.h> // 使用 malloc 需要引入

int main()
{
    int n;
    // 1. 读取 N
    if(scanf("%d", &n) != 1) return 1;

    // 2. 内存优化：使用动态内存分配（解决数组越界）
    long long *a = (long long*)malloc(n * sizeof(long long));
    if (a == NULL) return 1; // 内存分配失败检查

    long long sum_all = 0;
    
    // 3. 第一次循环：读取数据并计算总和
    for(int i = 0; i < n; i++)
    {
        if(scanf("%lld", &a[i]) != 1) {
            free(a);
            return 1;
        }
        sum_all += a[i];
    }
    
    // 4. 第二次循环：O(N) 计算 S
    long long S = 0;
    long long sum_prefix = 0;
    
    for(int i = 0; i < n; i++)
    {
        sum_prefix += a[i];
        
        // (sum_all - sum_prefix) 即为 a[i+1] + ... + a[n]
        // S += a[i] * (a[i+1] + a[i+2] + ... + a[n]);
        S += a[i] * (sum_all - sum_prefix);
    }
    
    // 5. 释放内存
    free(a);

    // 6. 输出修正：使用 %lld
    printf("%lld\n", S);
    
    return 0;
}