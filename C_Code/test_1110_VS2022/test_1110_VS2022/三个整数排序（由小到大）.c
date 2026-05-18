#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	// 定义并初始化
	int a = 0, b = 0, c = 0;
	int temp; // 定义中间变量
	printf("请在一行中输入3个整数（以空格隔开）：\n");
	scanf("%d %d %d", &a, &b, &c);
	// 排序逻辑
	if (a > b) {
		temp = a;
		a = b;
		b = temp;
	}
	if (a > c) {
		temp = a;
		a = c;
		c = temp;
	}
	if (b > c) {
		temp = b;
		b = c;
		c = temp;
	}
	printf("由小到大排列为：\n%d < %d < %d", a, b, c);
	return 0;
}
