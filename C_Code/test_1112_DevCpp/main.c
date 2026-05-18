#include <stdio.h>
//  声明外部文件中的函数
extern int Add(int x, int y);
int main(){
	int a = 58;
	int b = 42;
	int sum = Add(a, b);
	printf("两数的和为：\n%d", sum);
	
	return 0;
}
