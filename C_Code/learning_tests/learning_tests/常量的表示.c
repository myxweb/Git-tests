#include <stdio.h>
// #define 定义的标识符常量不占内存，只是一个临时符号，预编译后这个符号就不存在
#define MAX 100

// 指定枚举常量MON取值为1，否则默认为0
enum Day
{
	MON = 1, TUES, WED, THURS, FRI, SAT, SUN
};

int main() {
	//【字面常量】
	20;
	3.1415;
	'x';
	"myx";

	//【const修饰的常变量】
	const float PI = 3.1415f;
	//pi = 3.14;  // 错误提示：表达式必须是可修改的左值；原因：不可给PI赋值更新
	// 验证：const修饰的常变量不是真正意义的常量
	const int N = 10;
	// int arr[N] = { 0 }; // 错误提示：表达式必须含有常量值； 原因：数组的长度只能是常量或者常量表达式

	//【#define定义的标识符常量】
	printf("Max is %d\n", MAX);

	//【枚举常量】: 依次输出 1、2、3、4、5、6、7
	printf("MON = %d\n", MON);
	printf("TUES = %d\n", TUES);
	printf("WED = %d\n", WED);
	printf("THURS = %d\n", THURS);
	printf("FRI = %d\n", FRI);
	printf("SAT = %d\n", SAT);
	printf("SUN = %d\n", SUN);

	return 0;
}