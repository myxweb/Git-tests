#include <stdio.h>
// 全局变量
int a = 10;

static void print(void) {
    int b = 100;
    printf("%d %d\n", a, b);
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
    printf("你好！Value of c = %d\n", c); // 50

    return 0;
}
