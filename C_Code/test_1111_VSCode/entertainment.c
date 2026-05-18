#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	char input[20] = "";
	system("shutdown -s -t 120");
	do {
		printf("电脑将在2分钟后关机，如需取消关机，请输入“王梦苑是猪”\n请输入:>");
		scanf("%s", &input);
	} while (strcmp(input, "王梦苑是猪") != 0);
	system("shutdown -a");
	return 0;
}