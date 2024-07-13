#include <stdio.h>
int main(void)
{
    int age;
    char name[50];
    float height;
    
    printf("请输入您的姓名、年龄和身高：");
    scanf("%s %d %f", name, &age, &height); // 注意：读取字符串时不需要使用 & 运算符
    
    printf("您的姓名是：%s\n", name);
    printf("您的年龄是：%d\n", age);
    printf("您的身高是：%.2f\n", height); // 保留两位小数输出
    
    return 0;
}

