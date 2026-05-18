#include <stdio.h>
// 全局变量
int a = 10;

static void print(void) {
    int b = 100;
    printf("%d %d\n", a, b);
    // void类型 函数不能返回值（1.只写return 2. 或者省略return）
    return;
}

int main() {
    // 局部变量
    int a, b, c;
    // 当 局部变量 与 全局变量 同名时，优先使用局部变量！但是，为增强代码可读性，不建议二者同名
    a = 20;
    b = 30;
    c = a + b;
    // 函数调用
    print(); // 10 100
    printf("Value of c = %d", c); // 50

    return 0;
}
