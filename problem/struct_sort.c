#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct {
    char name[20];
    int age;
    float gpa; // 新增 GPA 字段
} Student;
// 按姓名排序（升序）

int cmp_by_name(const void *a, const void *b)
{
    Student *s1 = (Student *)a;
    Student *s2 = (Student *)b;
    return strcmp(s1->name, s2->name);
}

// 按年龄排序（降序）
int cmp_by_age_desc(const void *a, const void *b) {
    Student *s1 = (Student *)a;
    Student *s2 = (Student *)b;
    return s2->age - s1->age; // 降序：大值在前
}

// 按 GPA 排序（升序，处理浮点精度）
int cmp_by_gpa(const void *a, const void *b) {
    Student *s1 = (Student *)a;
    Student *s2 = (Student *)b;
    if (s1->gpa > s2->gpa + 1e-5) return 1;  // 避免浮点精度误差
    if (s1->gpa < s2->gpa - 1e-5) return -1;
    return 0;
}

// 通用打印函数
void print_students(Student arr[], size_t sz, const char *title) {
    printf("========== %s ==========\n", title);
    printf("%-10s %-6s %-5s\n", "姓名", "年龄", "GPA");
    printf("-----------------------------\n");
    for (size_t i = 0; i < sz; i++) {
        printf("%-10s %-6d %.2f\n", arr[i].name, arr[i].age, arr[i].gpa);
    }
    printf("\n");
}

int main() 
{
    Student students[] = {
        {"zhangsan", 20, 3.5},
        {"wu", 18, 3.8},
        {"yi", 13, 4.0},
        {"li", 22, 3.2},
        {"wang", 19, 3.9}
    };
    size_t count = sizeof(students) / sizeof(students[0]);
    
    // 按姓名排序
    qsort(students, count, sizeof(Student), cmp_by_name);
    print_students(students, count, "按姓名排序（升序）");
    
    // 按年龄排序（降序）
    qsort(students, count, sizeof(Student), cmp_by_age_desc);
    print_students(students, count, "按年龄排序（降序）");
    
    // 按 GPA 排序
    qsort(students, count, sizeof(Student), cmp_by_gpa);
    print_students(students, count, "按 GPA 排序（升序）");


    
    return 0;
}