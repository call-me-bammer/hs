#include <stdio.h>
void ht(int n, int a, int b, int c) {
	if (n == 1) {
		printf("%d %d\n", a, c);
	}
	else {
		ht(n - 1, a, c, b);
		printf("%d %d\n", a, c);
		ht(n - 1, b, a, c);
	}
}
int main(void) {
	int n;
	int power = 1;
	scanf_s("%d", &n);
	int i;
	for (i = 0; i < n; i++) {
		power *= 2;
	}
	printf("%d\n", power - 1);
	ht(n, 1, 2, 3);
}
