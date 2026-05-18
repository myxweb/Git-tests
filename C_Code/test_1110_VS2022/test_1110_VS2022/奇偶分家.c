#define	_CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    // n：一个正整数 num：输入的n个非负整数 a: 奇数个数 b: 偶数个数
    int n, num, a = 0, b = 0;
    printf("请输入一个正整数为（≤1000）:\n");
    scanf("%d", &n);
    if (n <= 1000) {
        for (int i = 1; i <= n; i++)
        {
            scanf("%d", &num);
            if (num % 2 != 0) a++;
            else b++;
        }
        printf("奇数个数为：%d, 偶数个数为：%d", a, b);
    }
    else printf("输入的正整数有误，请重新输入~");
    return 0;
}
