#include <stdio.h>
int main() {
    char s[101];
    scanf("%100s", s); // 防止溢出

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            s[i] = s[i] - 'A' + 'a';
        } else if (s[i] >= 'a' && s[i] <= 'z') {
            s[i] = s[i] - 'a' + 'A';
        }
        // 其他字符不变
    }

    printf("%s\n", s);
    return 0;
}