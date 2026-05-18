#include <stdio.h>
// bool类型，要包含头文件 stdbool.h
#include <stdbool.h>
int main() {
	// sizeof: 单目运算符，用来获取 数据类型|变量 在内存中所占的字节大小，返回值为 size_t，实际上是 无符号整型，unsigned int
	// 占位符：%d：十进制有符号整型、 %zu：既能打印无符号整型又能打印有符号整型、 zu：用来格式化 size_t 类型的整数值的标准占位符
	printf("Size of char: %zu\n", sizeof(char));  // 1
	printf("Size of short: %zu\n", sizeof(short)); // 2 
	printf("Size of int: %zu\n", sizeof(int)); // 4
	printf("Size of long: %zu\n", sizeof(long)); // 4
	printf("Size of long long: %zu\n", sizeof(long long)); // 8
	printf("Size of float: %zu\n", sizeof(float)); // 4 
	printf("Size of double: %zu\n", sizeof(double)); // 8

	bool truth = 1;
	printf("Size of bool: %zu\n", sizeof(bool)); // 1

	return 0;
}
