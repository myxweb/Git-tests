#include <stdio.h>
#include <string.h>
int main() {
    char c = 'a';
    char arr1[] = "abcdef";
    char arr2[] = { 'a', 'b', 'c', 'd', 'e', 'f'};
    char arr3[] = { 'a', 'b', 'c', 'd', 'e', 'f', '\0'};

    printf("%s\n", arr1); // abcdef
    printf("%s\n", arr2); // abcdef烫烫烫烫烫烫烫烫烫烫烫烫烫abcdef
    printf("%s\n", arr3); // abcdef
    printf("arr1的长度为 %zu\narr2的长度为 %zu\narr3的长度为 %zu\n", strlen(arr1), strlen(arr2), strlen(arr3));// 6、38、6

    //转义字符
    printf("(Are you ok??)\n"); // 三字母词目前在多数编译器下，不用转义也能正常输出
    printf("\a"); // 终端弹出时，会发出声音
    printf("%zu\n", strlen("c:\test\628\test.c")); // 14
    printf("c:\test\628\test.c\n");
    printf("%zu\n", strlen("111好\n哈哈")); // 10, 此处，一个汉字字符为2个字节

    // '\t'水平制表符作用的验证
    printf("好好aa\t哈哈t\t嘿嘿嘿hei\n"); // 好好aa  哈哈t   嘿嘿hei
    printf("好好好好\t哈哈\n"); // 好好好好        哈哈
    printf("好好好好好\t哈哈\n"); // 好好好好好      哈哈

    return 0;
}
