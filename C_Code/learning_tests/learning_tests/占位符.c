#define	_CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int num = 100;
	printf("10进制为 %d\n", num); // 100
	printf("8进制为 %o\n", num);  // 144
	printf("16进制为 %x\n", num); // 64
	printf("16进制为 %X\n", num); // 64
	printf("8进制带前缀为 %#o\n", num); // 0144
	printf("16进制带前缀0x为 %#x\n", num); // 0x64
	printf("16进制带前缀0X为 %#X\n", num); // 0X64

	double f = 254.36;
	printf("float形式：%f\n", f); // 保留6位小数：254.360000
	printf("指数e形式：%e\n", f); // 2.543600e2
	printf("指数E形式：%E\n", f); // 2.543600E2
	// 不输出小数点后无意义的零
	printf("float形式：%g\n", f); // 254.36

	// 【限定宽度、精度（保留小数位）、标志】
	printf("限定宽度为6位，且保留1位小数，默认右对齐：%6.1f\n", f); // _254.4
	// 最小宽度和小数位数这两个限定值，都可以用* 代替，通过printf()的参数传入
	printf("限定宽度为9位，且保留3位小数，默认右对齐：%*.*f\n", 9, 3, f); // __254.360
	// 用0填充空白位置，与宽度一起使用
	printf("限定宽度为9位，且保留3位小数，默认右对齐：%0*.*f\n", 9, 3, f); // 00254.360
	printf("限定宽度为6位，左对齐，右边留空格：%0-6d\n", 101); // 101___
	printf("显示正号+：%+d\n，%d", num, num - 200); // +100, -100

	return 0;
}