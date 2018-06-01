#include <stdio.h>
void ht(int n, int a, int b, int c) {
	if (n == 0) return ;
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
	printf("%d\n", (1 << i) - 1);
	ht(n, 1, 2, 3);
}
