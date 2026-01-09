// #include <stdio.h>
// //695
// int main() {
//     int scores[45];
//     int sum = 0, count = 0;
//     double average;

//     // 输入成绩
//     for (int i = 0; i < 45; i++) {
//         scanf("%d", &scores[i]);
//         sum += scores[i];
//     }

//     // 计算平均分
//     average = (double)sum / 45;

//     // 统计高于平均分的人数
//     for (int i = 0; i < 45; i++) {
//         if (scores[i] > average) {
//             count++;
//         }
//     }

//     // 输出结果
//     printf("%d\n", count);

//     return 0;
// }


//696
#include <stdio.h>

// int main() {
//     int numbers[10];
//     int min_value;

//     // 输入十个整数
//     for (int i = 0; i < 10; i++) {
//         scanf("%d", &numbers[i]);
//     }

//     // 初始化最小值为第一个数
//     min_value = numbers[0];

//     // 遍历数组寻找更小的数
//     for (int i = 1; i < 10; i++) {
//         if (numbers[i] < min_value) {
//             min_value = numbers[i];
//         }
//     }

//     // 输出最小值
//     printf("%d\n", min_value);

//     return 0;
// }


// //697

// #include <stdio.h>

// int main() {
//     int numbers[10];

//     // 输入十个整数
//     for (int i = 0; i < 10; i++) {
//         scanf("%d", &numbers[i]);
//     }

//     // 使用冒泡排序进行升序排列
//     for (int i = 0; i < 10 - 1; i++) {
//         for (int j = 0; j < 10 - 1 - i; j++) {
//             if (numbers[j] > numbers[j + 1]) {
//                 // 交换两个数
//                 int temp = numbers[j];
//                 numbers[j] = numbers[j + 1];
//                 numbers[j + 1] = temp;
//             }
//         }
//     }

//     // 输出排序后的结果
//     for (int i = 0; i < 10; i++) {
//         printf("%d ", numbers[i]);
//     }
//     printf("\n");

//     return 0;
// }


// 699
#include <stdio.h>

// int main() {
//     int rows = 2, cols = 3; // 根据输入样例设定
//     int original[2][3];
//     int transposed[3][2]; // 行列互换后的维度

//     // 读取原始矩阵
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < cols; j++) {
//             scanf("%d", &original[i][j]);
//         }
//     }

//     // 进行转置操作
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < cols; j++) {
//             transposed[j][i] = original[i][j];
//         }
//     }

//     // 输出转置后的矩阵
//     for (int i = 0; i < cols; i++) { // 遍历转置后的行 (即原矩阵的列数)
//         for (int j = 0; j < rows; j++) { // 遍历转置后的列 (即原矩阵的行数)
//             printf("%d ", transposed[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }


// 703
// #include <stdio.h>

// int main() {
//     // 初始化矩阵
//     int matrix[3][4] = {{1, 2, 3, 4},
//                         {9, 8, 7, 6},
//                         {-10, 10, -5, 2}};
//     int max_value = matrix[0][0];
//     int max_row = 0, max_col = 0;

//     // 遍历矩阵查找最大值及位置
//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 4; j++) {
//             if (matrix[i][j] > max_value) {
//                 max_value = matrix[i][j];
//                 max_row = i;
//                 max_col = j;
//             }
//         }
//     }

//     // 输出结果 (注意样例输出格式 row=2,column=1 是从0开始计数的)
//     printf("max=%d,row=%d,column=%d\n", max_value, max_row, max_col);

//     return 0;
// }


// // 706
// #include <stdio.h>
// #include <string.h>
// #include <ctype.h> // 包含 isspace 函数

// int main() {
//     char line[10000]; // 假设输入行不会太长
//     int word_count = 0;
//     int in_word = 0; // 标记当前是否处于一个单词内部

//     // 读取整行输入
//     if (fgets(line, sizeof(line), stdin) != NULL) {
//         int len = strlen(line);
//         // 处理可能存在的末尾换行符
//         if (len > 0 && line[len - 1] == '\n') {
//             line[len - 1] = '\0';
//         }

//         // 遍历字符串
//         for (int i = 0; line[i] != '\0'; i++) {
//             if (isspace((unsigned char)line[i])) { // 遇到空格、制表符等
//                 in_word = 0; // 不在单词内
//             } else {
//                 if (!in_word) { // 从非单词进入单词
//                     word_count++;
//                     in_word = 1; // 标记在单词内
//                 }
//             }
//         }
//     }

//     // 输出单词数量
//     printf("%d\n", word_count);

//     return 0;
// }


//707
// #include <stdio.h>

// int main() {
//     // 初始化二维数组 a
//     int a[3][4] = {{3, 16, 87, 65},
//                    {4, 32, 11, 108},
//                    {10, 25, 12, 37}};
//     int b[3]; // 存储每行最大值的一维数组

//     // 遍历每一行，找出最大值
//     for (int i = 0; i < 3; i++) {
//         b[i] = a[i][0]; // 初始化为该行第一个元素
//         for (int j = 1; j < 4; j++) {
//             if (a[i][j] > b[i]) {
//                 b[i] = a[i][j];
//             }
//         }
//     }

//     // 输出结果数组 b
//     for (int i = 0; i < 3; i++) {
//         printf("%d ", b[i]);
//     }
//     printf("\n");

//     return 0;
// }

// 708
// #include <stdio.h>
// #include <string.h>

// #define NUM_COUNTRIES 5
// #define MAX_LEN 100 // 假设国家名长度不超过100

// int main() {
//     char countries[NUM_COUNTRIES][MAX_LEN];
//     char temp[MAX_LEN];

//     // 输入国家名称 (使用 fgets 更安全)
//     for (int i = 0; i < NUM_COUNTRIES; i++) {
//         if (fgets(countries[i], sizeof(countries[i]), stdin)) {
//              // 移除 fgets 可能读入的换行符
//              countries[i][strcspn(countries[i], "\n")] = '\0';
//         }
//     }

//     // 使用冒泡排序按字典序排列
//     for (int i = 0; i < NUM_COUNTRIES - 1; i++) {
//         for (int j = 0; j < NUM_COUNTRIES - 1 - i; j++) {
//             // 比较相邻两个字符串
//             if (strcmp(countries[j], countries[j + 1]) > 0) {
//                 // 交换字符串
//                 strcpy(temp, countries[j]);
//                 strcpy(countries[j], countries[j + 1]);
//                 strcpy(countries[j + 1], temp);
//             }
//         }
//     }

//     // 输出排序后的国家名称
//     for (int i = 0; i < NUM_COUNTRIES; i++) {
//         printf("%s\n", countries[i]);
//     }

//     return 0;
// }

// 709
// #include <stdio.h>

// int main() {
//     long long fib[20]; // 使用 long long 避免溢出

//     // 初始化前两项
//     fib[0] = 1;
//     fib[1] = 1;

//     // 计算后续项
//     for (int i = 2; i < 20; i++) {
//         fib[i] = fib[i - 1] + fib[i - 2];
//     }

//     // 按 %-8d 格式输出，每5个数一行
//     for (int i = 0; i < 20; i++) {
//         printf("%-8lld", fib[i]);
//         if ((i + 1) % 5 == 0) {
//             printf("\n");
//         }
//     }

//     // 如果最后一行不足5个数，也需要换行
//     if (20 % 5 != 0) {
//         printf("\n");
//     }

//     return 0;
// }

// 710

// #include <stdio.h>
// #include <string.h>

// #define NUM_STRINGS 4
// #define MAX_LEN 1000 // 假设字符串长度

// int main() {
//     char strings[NUM_STRINGS][MAX_LEN];
//     char *max_string = strings[0]; // 指向最大字符串的指针

//     // 输入4个字符串
//     for (int i = 0; i < NUM_STRINGS; i++) {
//         scanf("%s", strings[i]); // 读取以空格或换行分隔的字符串
//         // 比较并更新最大字符串指针
//         if (strcmp(strings[i], max_string) > 0) {
//             max_string = strings[i];
//         }
//     }

//     // 输出最大的字符串
//     printf("%s\n", max_string);

//     return 0;
// }

// 711
// #include <stdio.h>
// #include <ctype.h> // 包含 toupper 和 tolower 函数

// int main() {
//     char input_str[101]; // 字符串长度为100 + 1个结束符

//     // 使用 scanf 读取字符串 (假设没有空格)
//     scanf("%100s", input_str); // %100s 防止缓冲区溢出

//     // 遍历字符串并转换大小写
//     for (int i = 0; input_str[i] != '\0'; i++) {
//         if (isupper((unsigned char)input_str[i])) {
//             input_str[i] = tolower((unsigned char)input_str[i]);
//         } else if (islower((unsigned char)input_str[i])) {
//             input_str[i] = toupper((unsigned char)input_str[i]);
//         }
//         // 其他字符保持不变
//     }

//     // 使用 printf 输出转换后的字符串
//     printf("%s\n", input_str);

//     return 0;
// // }

// // 712
// #include <stdio.h>

// #define ARRAY_SIZE 10

// int main() {
//     int arr[ARRAY_SIZE];
//     int max_index = 0, min_index = 0;
//     int temp;

//     // 输入数组元素
//     for (int i = 0; i < ARRAY_SIZE; i++) {
//         scanf("%d", &arr[i]);
//         // 在输入过程中同时找到初始最大/最小值索引
//         if (arr[i] > arr[max_index]) {
//             max_index = i;
//         }
//         if (arr[i] < arr[min_index]) {
//             min_index = i;
//         }
//     }

//     // 交换最大值与第一个元素
//     temp = arr[0];
//     arr[0] = arr[max_index];
//     arr[max_index] = temp;

//     // 特殊情况处理：如果原来最小值在索引0，交换后它到了 max_index
//     if (min_index == 0) {
//         min_index = max_index;
//     }

//     // 交换最小值与最后一个元素
//     temp = arr[ARRAY_SIZE - 1];
//     arr[ARRAY_SIZE - 1] = arr[min_index];
//     arr[min_index] = temp;


//     // 按照格式输出结果
//     for (int i = 0; i < ARRAY_SIZE; i++) {
//         printf("%8d", arr[i]);
//         if ((i + 1) % 5 == 0) {
//             printf("\n");
//         }
//     }
//     // 确保最后一行结束后有换行
//     if (ARRAY_SIZE % 5 != 0) {
//          printf("\n");
//     }

//     return 0;
// }


// // 713
// #include <stdio.h>

// int main() {
//     int n;
//     double numbers[1000]; // 假设 n 不会超过1000
//     double sum = 0.0;

//     // 输入元素个数 n
//     scanf("%d", &n);

//     // 输入 n 个数字并累加
//     for (int i = 0; i < n; i++) 
//     {
//         scanf("%lf", &numbers[i]);
//         sum += numbers[i];
//     }

//     // 输出总和，保留两位小数
//     printf("%.2f\n", sum);

//     return 0;
// }

// 714
// #include <stdio.h>
// #include <string.h>

// int main() {
//     char str[10000]; // 假设输入字符串足够大
//     char ch_to_remove;
//     char result[10000];
//     int j = 0; // result 数组的索引

//     // 输入字符串和要删除的字符
//     scanf("%s", str);
//     getchar(); // 消耗上面输入留下的换行符
//     scanf("%c", &ch_to_remove);

//     // 遍历原字符串，将不等于 ch_to_remove 的字符复制到 result
//     for (int i = 0; str[i] != '\0'; i++) {
//         if (str[i] != ch_to_remove) {
//             result[j] = str[i];
//             j++;
//         }
//     }
//     result[j] = '\0'; // 为结果字符串添加结束符

//     // 输出结果字符串
//     printf("%s\n", result);

//     return 0;
// }

// 715
// #include <stdio.h>

// int main() {
//     int matrix[3][3];
//     int sum = 0;

//     // 输入3x3矩阵
//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 3; j++) {
//             scanf("%d", &matrix[i][j]);
//         }
//     }

//     // 计算主对角线 (i==j) 和副对角线 (i+j==2) 元素之和
//     // 注意中心元素(1,1)只计算一次
//     for (int i = 0; i < 3; i++) {
//         sum += matrix[i][i]; // 主对角线
//         if (i != (2 - i)) { // 避免中心元素重复计算
//              sum += matrix[i][2 - i]; // 副对角线
//         }
//     }

//     // 输出结果
//     printf("%d\n", sum);

//     return 0;
// }


// 716
// #include <stdio.h>

// int main() {
//     int triangle[10][10]; // 存储杨辉三角

//     构建杨辉三角
//     for (int i = 0; i < 10; i++) {
//         triangle[i][0] = 1; // 每行第一个元素是1
//         triangle[i][i] = 1; // 每行最后一个元素是1
//         计算中间元素
//         for (int j = 1; j < i; j++) {
//             triangle[i][j] = triangle[i-1][j-1] + triangle[i-1][j];
//         }
//     }

//     按照指定格式输出
//     for (int i = 0; i < 10; i++) {
//         for (int j = 0; j <= i; j++) {
//             printf("%-5d", triangle[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }


// 717
// #include <stdio.h>

// #define INITIAL_SIZE 9
// #define FINAL_SIZE 10

// int main() {
//     // 初始化数组 (长度为10，但只初始化前9个)
//     int a[FINAL_SIZE] = {3, 5, 7, 9, 12, 15, 18, 21, 25};
//     int num;
//     int insert_pos = INITIAL_SIZE; // 默认插入到最后

//     // 输出原数组 (前9个元素)
//     for (int i = 0; i < INITIAL_SIZE; i++) {
//         printf("%d ", a[i]);
//     }
//     printf("\n");

//     // 输入待插入的数
//     scanf("%d", &num);

//     // 寻找插入位置
//     for (int i = 0; i < INITIAL_SIZE; i++) {
//         if (num < a[i]) {
//             insert_pos = i;
//             break;
//         }
//     }

//     // 将插入位置及之后的元素向后移动一位
//     for (int i = FINAL_SIZE - 1; i > insert_pos; i--) {
//         a[i] = a[i - 1];
//     }
//     // 在找到的位置插入新元素
//     a[insert_pos] = num;
//     // 输出插入后的数组
//     for (int i = 0; i < FINAL_SIZE; i++) {
//         printf("%d ", a[i]);
//     }
//     printf("\n");
//     return 0;
// }

