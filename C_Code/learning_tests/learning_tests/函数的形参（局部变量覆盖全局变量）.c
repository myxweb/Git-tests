#include <stdio.h>
// 全局变量
int a = 20;
int main()
{
    // 局部变量
    int a = 10;
    int b = 20;
    int c = 0;
    int sum(int, int); // 声明外部函数，已解决 sum 未定义警告（倘若把 sum函数 放在 main函数 上面，就可以不要此声明）

    printf("value of a in main() = %d\n", a); // 10
    c = sum(a, b);
    printf("value of c in main() = %d\n", c); // 30

    return 0;
}

static int sum(int a, int b)
{
    printf("value of a in sum() = %d\n", a); // 10，而非 20，局部变量 覆盖 全局变量
    printf("value of b in sum() = %d\n", b); // 20

    return a + b;
}
// 输出顺序为10 10 20 30