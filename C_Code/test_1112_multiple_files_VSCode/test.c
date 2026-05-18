#include <stdio.h>

// 声明外部文件中的函数
extern int Add(int a, int b);
int main()
{
    int num1 = 3, num2 = 7;
    int sum = Add(num1, num2);
    printf("两数的和为：%d", sum);
    return 0;
}