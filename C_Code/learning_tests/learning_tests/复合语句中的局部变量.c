#include <stdio.h>
int main() {
	int i = 100;
	int sum = 0;
	for (int i = 1; i <= 10; i++) {
		sum += i;
	}
	printf("1加到10的和为 %d\n", sum);
	printf("%d", i);

	return 0;
}