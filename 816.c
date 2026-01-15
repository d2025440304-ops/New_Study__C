#include <stdio.h>

struct student {
    int num;
    char name[20];
    char sex;
    int age;
    char tel[20];
    char add[50];
};

// 注意：结构体定义需在函数前
struct student stu[5] = {
    {2001, "lier", 'M', 20, "029-84701466", "yantaqu"},
    {2002, "jiangxiaoyu", 'F', 18, "029-88378995", "beilinqu"},
    {2003, "songjia", 'M', 19, "021-68353079", "shagnhai"},
    {2004, "zhangsan", 'F', 20, "0911-81101466", "baotaqu"},
    {2005, "dongli", 'M', 18, "029-84523466", "yantaqu"}
};

void search(struct student stu[], int n) {
    int id;
    scanf("%d", &id);

    for (int i = 0; i < n; i++) {
        if (stu[i].num == id) {
            printf("%d %s %c %d %s %s\n", 
                   stu[i].num, stu[i].name, stu[i].sex, 
                   stu[i].age, stu[i].tel, stu[i].add);
            return;
        }
    }
    printf("未查找到该学生\n");
}

int main() {
    search(stu, 5);
    return 0;
}