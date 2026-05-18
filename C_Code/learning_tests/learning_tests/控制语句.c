//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			break;
//		printf("%d ", i);
//		i = i + 1;
//	}
//	return 0;
//}


//#include <stdio.h>
//int main() {
//    int i = 0;
//    while (i < 10) {
//        i = i + 1;
//        if (i == 5)
//            continue;
//        printf("%d ", i);
//    }
//    return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main() {
//	int day = 0;
//	printf("请输入1-7的自然数：");
//	scanf("%d", &day);
//	switch (day) {
//		case 1:
//		case 2:
//		case 3:
//		case 4:
//		case 5:
//			printf("Today is weekday!\n");
//			break; // 若没有此处的break，输入 1-5 时，终端输出 Today is weekday! Today is weekend!（其他同理）
//		case 6:
//		case 7:
//			printf("Today is weekend!\n");
//			break;
//		default:
//			printf("输入有误，请重新输入（1-7的自然数）");
//			break; // 可有可无
//	}
//
//	return 0;
//}

//#include <stdio.h>
//int main() {
//    int i = 0;
//    for (i = 1; i <= 10; i++) {
//        if (i == 5)
//            //break;
//            continue;
//        printf("%d ", i); // 当为break时，输出 1 2 3 4； 当为continue时，输出 1 2 3 4 6 7 8 9 10
//    }
//    return 0;
//}

//#include <stdio.h>
//int main() {
//    int i = 0;
//    int arr[] = {1, 2, 3, 4, 5};
//    for (i = 0; i <= sizeof(arr) / sizeof(arr[0]) - 1; i++) {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}

//#include <stdio.h>
//int main() {
//    int sum = 0; // 在 循环体外 定义变量sum
//    for (int i = 1; i <= 10; i++) {
//        int square = i * i; // 在 循环体内 定义变量square，仅在循环体内有效
//        sum += square; // 更新 外部变量sum 的值
//    }
//    printf("1^2 + 2^2 + 3^2 + ... + 10^2 = %d", sum);
//    return 0;
//}

//#include <stdio.h>
//int main() { 
//    int i = 0, j = 0;
//    for (; i < 10; i++)
//    {
//        for (; j < 10; j++)
//        {
//            printf("呵");
//            if (j == 9)
//                printf("\n"); // 10行10列的呵，若省略初始化表达式： i = 0 和 j = 0，则只输出 呵呵呵呵呵呵呵呵呵呵（经调试得出，后续 j = 10, 内嵌的 for循环体 不再执行）
//        }
//    }
//    return 0;
//}

//#include <stdio.h>
//int main() { 
//    int x, y;
//    for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)
//        printf("呵 ");
//
//    return 0;
//}

//#include <stdio.h>
//int main() {
//	int i = 0;
//	do {
//		//if (i == 2) break;
//		//if (i == 3) continue;
//		// 若没有 break 和 continue，则输出： 0 1 2 3 4
//		// 若是 break, 则输出： 0 1
//		// 若是 continue, 则输出： 0 1 2，后进入死循环
//		printf("%d ", i);
//		i += 1;
//	} while ( i<5 );
//
//	return 0;
//}

//#include <stdio.h>
//int main() {
//    int i = -1;
//    do {
//        i += 1;
//        if (i == 3) continue;
//        printf("%d ", i); // 0 1 2 4
//    } while (i < 4);
//    return 0;
//}

// 无限循环
//#include <stdio.h>
//int main() {
//	for (; ;) {
//		printf("呵");
//	}
//
//	while (1) {
//		printf("呵");
//	}
//
//	return 0;
//}


//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//int main() {
//    char input[10] = { 0 };
//    system("shutdown -s -t 120");
//again:
//    printf("电脑将在2分钟后关机，如需取消关机，请输入“我是猪”。\n请输入:>");
//    scanf("%s", &input);
//    if (strcmp(input, "我是猪") == 0)
//        system("shutdown -a");
//    else
//        goto again;
//    return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main() {
//	char input[20] = "";
//	system("shutdown -s -t 120");
//	do {
//		printf("电脑将在2分钟后关机，如需取消关机，请输入“王梦苑是猪”\n请输入:>");
//		scanf("%s", &input);
//	} while (strcmp(input, "王梦苑是猪") != 0);
//	system("shutdown -a");
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main() {
//	char input[10] = "";
//	system("shutdown -s -t 120");
//	while (1) {
//		printf("电脑将在2分钟后关机，如需取消关机，请输入“我是猪”\n请输入:>");
//		scanf("%s", &input);
//		if (strcmp(input, "我是猪") == 0) {
//			system("shutdown -a");
//			break;
//		}
//	}
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main() {
//	char input[10] = "";
//	system("shutdown -s -t 120");
//	while (strcmp(input, "我是猪") != 0) {
//		printf("电脑将在2分钟后关机，如需取消关机，请输入“我是猪”\n请输入:>");
//		scanf("%s", &input);
//	}
//	system("shutdown -a");
//	return 0;
//}

