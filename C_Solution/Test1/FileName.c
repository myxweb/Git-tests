#include <stdio.h>
#include <string.h>
int main() {
	char arr1[] = "abcdef";
	char arr2[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
	// 手动添加 字符串零终止符
	char arr3[] = { 'a', 'b', 'c', 'd', 'e', 'f', '\0', 'x', 'y', 'z' };
	printf("%s\n", arr1); // abcdef
	printf("%s\n", arr2); // abcdef烫烫烫烫烫烫烫烫烫烫烫烫烫abcdef（VS2022验证的，小熊猫C++输出的是abcdefabcdef）
	printf("%s\n", arr3); // abcdef
	printf("arr1的长度为 %zu\narr2的长度为 %zu\narr3的长度为 %zu\n", strlen(arr1), strlen(arr2), strlen(arr3)); // 6、38（此处，一个汉字字符占用2个字节）、6
	return 0;
} 