#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int a = 0, b = 0, res = 0;
	char cal;
	printf("请在一行依次输入整数1、运算符号、整数2（并以空格隔开）：\n");
	scanf("%d %c %d", &a, &cal, &b);
	switch (cal)
	{
	case '+':
		res = a + b;
		printf("= %d", res);
		break;
	case '-':
		res = a - b;
		printf("= %d", res);
		break;
	case '*':
		res = a * b;
		printf("= %d", res);
		break;
	case '/':
		if (b != 0) {
			// %g 和 %f 都是C语言中的格式控制符,用于格式化输出【浮点数】,但 %g 不输出小数点后无意义的零
			// eg: 1.250000 --- 1.25 
			printf("= %g", (float)a / b);
		}
		else printf("除数不能为0!");
		break;
	case '%':
		if (b != 0) {
			res = a % b;
			printf("= %d", res);
		}
		else printf("除数不能为0!");
		break;
	default:
		printf("ERROR!运算符号有误！");
	}

	return 0;
}