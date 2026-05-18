//#define	_CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main() {
//	// +
//	printf("%d\n", 8 + 2); // 10
//	printf("%f\n", 1.267 + 2); // 3.267000
//	printf("%g\n", 1.267 + 2); // 3.267
//	// -
//	printf("%g\n", -2 - 1.267); // -3.267
//	// *
//	printf("%g\n", -2 * 1.267); // -2.534
//	// /
//	printf("%d\n", 5 / 2); // 2
//	printf("%f\n", 5.0 / 2); // 2.500000
//	printf("%g\n", 5 / 2.0); // 2.5
//	// %
//	printf("%d\n", 10 % 3); // 1
//	// printf("%d\n", 10 % 3.0); 报错：必须包含整型 
//	printf("%d\n", -10 % 3); // -1
//	printf("%d\n", -10 % -3); // -1
//	printf("%d\n", 10 % -3); // 1
//	return 0;
//}

//输出 0-100 之间的奇数和偶数，并分别统计个数 和 总和
//#include <stdio.h>
//int main() {
//	int oddCount = 0, evenCount = 0;
//	int oddSum = 0, evenSum = 0;
//	printf("奇数有：\n");
//	for (int num = 0; num <= 100; num++ ) {
//		if (num % 2 != 0) {
//			oddCount += 1;
//			oddSum += num;
//			printf("%d ", num);
//		}
//	}
//	printf("，共 %d 个奇数，和为 %d\n偶数有：\n", oddCount, oddSum);
//	for (int num = 0; num <= 100; num++ ) {
//		if (num % 2 == 0) {
//			evenCount += 1;
//			evenSum += num;
//			printf("%d ", num);
//		}
//	}
//	printf("，共 %d 个偶数，和为 %d", evenCount, evenSum);
//	return 0;
//}

// 嵌套for循环：输出 100-200 之间的 所有素数
//#include <stdio.h>
//int main() {
//	printf("100-200 之间的所有素数为：\n");
//	for (int i = 100; i <= 200; i++) { // 循环 100-200 之间的每一个数
//		// 先假设当前数为 质数
//		int isPrime = 1;
//		for (int j = 2; j < i; j++) {  // 循环 除1和它本身 的其它除数
//			if (i % j == 0) {
//				// 但凡能i能被j整除，则不是质数
//				isPrime = 0;
//				break;
//			}
//		}
//		if (isPrime == 1) printf("%d ", i);
//	}
//	return 0;
//}

// 函数调用：输出 2-10 之间的 所有质数
//#include <stdio.h>
//// 创建【判断质数】的函数
//int isPrime(int num) {
//	for (int i = 2; i < num; i++) if (num % i == 0) return 0;
//	return 1;
//}
//int main() {
//	printf("100-200 之间的所有素数为：\n");
//	for (int num = 2; num <= 10; num++) if (isPrime(num) == 1) printf("%d ", num);
//	return 0;
//}

// 辗转相除法，求两个数的最大公约数
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int operate(int num1, int num2) {
//	int temp = 0;
//	// 先判断num1和num2的大小，保证num1 > num2（建议加上）
//	if (num1 < num2) {
//		temp = num1;
//		num1 = num2;
//		num2 = temp;
//	}
//	// 辗转相除法：余数num1 % num2作为除数num2，除数num2作为被除数num1，直到余数为0（即num2为0），取最后的除数num1为最大公约数
//	while (num2 != 0) {
//		temp = num1 % num2;
//		num1 = num2;
//		num2 = temp;
//	}
//	return num1;
//}
//int main() {
//	int num1, num2;
//	printf("请输入两个正整数：\n");
//	int ret = scanf("%d %d", &num1, &num2);
//	if (ret == 2) {
//		printf("两个数的最大公约数为：\n%d", operate(num1, num2));
//	}
//	else printf("输入有误，请重新输入!");
//	
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main() {
//	int num = 0;
//	printf("请输入一个正整数：\n");
//	scanf("%d", &num);
//	printf("由低位到高位的数分别为：\n");
//	while (num != 0) {
//		int every = num % 10;
//		printf("%d ", every);
//		num = num / 10;
//	}
//}

//#include <stdio.h>
//#include <stdbool.h>
//int main() {
//	int a = 10;
//	bool truth = false;
//	printf("%d\n", a > 5); // 1
//	printf("%d\n", a > 20); // 0
//	printf("%d\n", a == 10); // 1
//	printf("%d\n", a != 10); // 0
//	printf("%d\n", truth == 0); // 1
//	printf("%d\n", truth == 1); // 0
//	return 0;
//}

//#include <stdio.h>
//int main() {
//	int a = 10; 
//	int b = a++; // b = 10, a = 11
//	int c = a++; // c = 11，a = 12
//	int d = ++b; // d = 11, b = 11
//	int e= a--;  // e = 12, a = 11
//	int f = --a; // f = 10,  a = 10
//	printf("a = %d\nb = %d\nc = %d\nd = %d\ne = %+d\nf = %d\n", a, b, c, +d, e ,-f); // 10 11 11 11 +12 -10
//	return 0;
//}


//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main() {
//	int n = 10;
//	// p的类型是 int* ， *: 说明 p 是指针变量，而前面的 int: 说明 指针变量p 指向的是 整型(int)类型 的对象
//	int* p = &n; // &: 取地址操作符，作用: 取出 n 的地址并存储到 指针变量p 中
//	*p = 50; // *: 解引用操作符，*p 的意思就是通过 p 中存放的地址，找到【指向的空间】，*p 其实就是 n变量，所以 *p = 50，就是给 n 赋值为 50
//	printf("n = %d\n", n); // 50
//
//	// 按用户指定的格式从键盘上把数据输入到指定的变量 n 中
//	scanf("%d" ,&n);
//	printf("n = %d\n", n); 
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//int main() {
//	char arr[] = "China·Chinese"; 
//	char arr1[] = {'C', 'h', 'i', 'n', 'a', '\0', 'c', '\0'};
//	//·相当于一个汉字（因为在中文输入下输入的），再加上 字符串结束符 '\0'
//	printf("%zu\n", sizeof arr);  // 15
//	printf("%zu\n", sizeof(arr)); // 15
//	printf("%zu\n", sizeof(char)); // 1
//	//printf("%zu\n", sizeof char); // 报错，原因：计算 数据类型所占用内存大小 时，必须带括号
//	printf("%zu\n", sizeof arr1); // 8
//
//	printf("%zu\n", strlen(arr)); // 14
//	printf("%zu\n", strlen(arr1));// 5
//
//	int a = 20;
//	double b = 2.13;
//	printf("%zu, %zu, %zu, %zu, %zu\n", sizeof(int), sizeof(a), sizeof a, sizeof(double), sizeof b); // 4, 4, 4, 8, 8
//	// 隐式转换：小数据类型 ==> 大数据类型
//	printf("%lf ,%zd\n", a + b ,sizeof(a + b)); // 22.130000, 8
//	printf("%.2lf, %zd\n", a / b, sizeof(a = a / b)); // 9.39, 4
//	// 显式转换（强制类型转换）,此处(int) 只截取整数部分
//	printf("%d ,%zd\n", a * (int)b, sizeof( a * (int)b )); // 40, 4
//	printf("%d ,%zd\n",(int)(a / b), sizeof((int)(a / b))); // 9, 4
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//void test1(int arr[])
//{
//	printf("%zu\n", sizeof(arr)); // 8
//}
//void test2(char ch[])
//{ 
//	printf("%zu\n", sizeof(ch)); // 8
//}
//int main()
//{
//	int arr[10] = { 0 }; // 相当于 int arr[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
//	char ch[10] = { 0 }; // 相当于 char ch[10] = {'\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0'} = ""
//	printf("%zu\n", sizeof(arr)); // 4 * 10 = 40
//	printf("%zu\n", sizeof(ch));  // 1 * 10 = 10
//	printf("%zu\n", strlen(ch));  // 0
//	test1(arr);
//	test2(ch);
//	return 0;
//}

//#include <stdio.h>
//int main() {
//	int numArr[] = {0, 1, 2, 3, 4, 5, 6};
//	printf("numArr数组中的元素个数为：%zu\n", (sizeof(numArr) / sizeof(numArr[0]))); // 28 / 4 = 7
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main() {
//	// 求两个整数中的最大值
//	int a = 0, b = 0, max = 0;
//	printf("输入两个整数（以空格隔开）：\n");
//	scanf("%d %d", &a, &b);
//	max = a > b ? a : b;
//	printf("两个数的最大值：\n%d", max);
//	return 0;
//}

//#include <stdio.h>
//int main() {
//    int a = 0, b = 3, c = 5;
//    int d = (a = b + 2, c = a - 4, b = c + 2);
//    printf("%d\n", d);  //3
//
//	return 0;
//}

//#include <stdio.h>
//int main() {
//    int arr[] = { 1, 2, 3, 4, 5, 6 };
//    printf("整型数组arr中的元素分别为：\n");
//    for (int i = 0; i < 6; i++) {
//        // 通过下标访问操作符[] 及改变下标来访问数组中的每一个元素
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}

//#include <stdio.h>
//int add(int x, int y)
//{
//    return x + y;
//}
//int main()
//{
//    int n = add(4, 6); // 操作数是 add 、4 和 6
//    printf("%d", n);   // 10，操作数是 printf 和 n
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	// 若最前面的为假，则后面的都不会计算
//	i = a++ && ++b && d++;
//	printf("i = %d\na = %d\nb = %d\nc = %d\nd = %d\n", i, a, b, c, d); // 0 1 2 3 4
//	printf("------------------------------------\n");
//	// 若前面的为真，则后面的都不会计算
//	i = a++ || ++b || d++;
//	printf("i = %d\na = %d\nb = %d\nc = %d\nd = %d\n", i, a, b, c, d); // 1 2 2 3 4
//	return 0;
//}

//#include <stdio.h>
//int main(){
//    int n = 1;
//    n = n << 1; // 1 的补码是 00000000000000000000000000000001
//    // 左移1位变成: 00000000000000000000000000000010（正整数的原、反、补码都相同，所以这也是结果的原码，转换成10进制就是2）
//    printf("%d\n", n);
//    int i = -1;
//    i = i << 1; // -1 的补码是 11111111111111111111111111111111
//    // 左移1位变成: 11111111111111111111111111111110 (这是结果的补码)
//    // 对结果的补码进行取反，+1的操作得到它的原码: 10000000000000000000000000000010 (转换成10进制就是-2)
//    printf("%d\n", i);
//    return 0;
//}

//#include <stdio.h>
//int main(){
//    int n = 1;
//    n = n >> 1; // 1 的补码是 00000000000000000000000000000001
//    // 右移1位变成: 00000000000000000000000000000000（ 正整数的原、反、补码都相同，所以这也是结果的原码，转换成10进制就是0 ）
//    printf("%d\n", n); // 0
//
//    int i = -1;
//    i = i >> 1; // -1 的补码是11111111111111111111111111111111
//    // 右移1位仍然是: 11111111111111111111111111111111(这是结果的补码)
//    // 对结果的补码进行取反，+1的操作得到它的原码: 10000000000000000000000000000001( 转换成10进制就是-1 )
//    printf("%d\n", i); // -1
//    return 0;
//}


//#include <stdio.h>
//int main() {
//	int a = 2;
//	int b = 8;
//	int x = -15;
//	int c1 = a << 1;
//	int c2 = a >> 1;
//	int d1 = b << 1;
//	int d2 = b >> 1;
//	int e1 = x << 2;
//	int e2 = x >> 3;
//	// 4 1 16 4 -60 -2 
//	printf("a << 1 后为：%d\na >> 1 后为：%d\nb << 1 后为：%d\nb >> 1 后为：%d\nx << 2 后为：%d\nx >> 3 后为：%d\n", c1, c2, d1, d2, e1, e2);
//	return 0;
//}

//#include <stdio.h>
//int main(){
//	// 1 的补码: 00000000000000000000000000000001     -1 的补码: 11111111111111111111111111111111
//	int num1 = 1;
//	int num2 = -1;
//	// 1 & -1的结果: 00000000000000000000000000000001，为正整数，所以这也是结果的原码，转换成10进制就是 1
//	printf("%d\n", num1 & num2); 
//	// 1 | -1的结果: 11111111111111111111111111111111，对结果的补码进行转换得到其原码: 10000000000000000000000000000001，转换成10进制就是 -1
//	printf("%d\n", num1 | num2);
//	// 1 ^ -1的结果: 11111111111111111111111111111110，对结果的补码进行转换得到其原码: 10000000000000000000000000000010，转换成10进制就是 -2
//	printf("%d\n", num1 ^ num2);
//	// 0 的补码: 00000000000000000000000000000000，~0 的结果: 11111111111111111111111111111111
//	// 对结果的补码进行转换得到其原码: 10000000000000000000000000000001，转换成10进制就是 -1
//	printf("%d\n", ~0);
//	return 0;
//}

//#include <stdio.h>
//int main(){
//	int a = 10;
//	int b = 20;
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("a = %d\nb = %d\n", a, b);
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main() {
//	int intNum = 0;
//	int count = 0;
//	printf("请输入一个整数：\n");
//	scanf("%d", &intNum);
//	while (intNum) {
//		if (intNum % 2 == 1) count += 1;
//		intNum = intNum / 2;
//	}
//	printf("此整数的二进制中1的个数位:\n%d", count);
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	int intNum = 0;
//	int count = 0;//计数
//	printf("请输入一个整数：\n");
//	scanf("%d", &intNum);
//	for (int i = 0; i < 32; i++)
//	{
//		if (intNum & (1 << i))
//			count++;
//	}
//	printf("此整数的二进制中1的个数位:\n%d", count);
//	return 0;
//}


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int intNum = 0;
	int count = 0;//计数
	printf("请输入一个整数：\n");
	scanf("%d", &intNum);
	while (intNum)
	{
		count++;
		intNum &=  (intNum - 1);
	}
	printf("此整数的二进制中1的个数位:\n%d", count);
	return 0;
}
