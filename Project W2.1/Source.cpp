#include<stdio.h>
int main() {
	int a, b;
	printf_s("input number : ");
	scanf_s("%d", &a);
	printf_s("input number : ");
	scanf_s("%d", &b);
	if (a < b) {
		for (int i = a;i <= b;i++) {
			printf_s("   NUMBER %d\n\n", i);
			for (int k = 1; k <= 12;k++) {
				printf_s(" %2d x %2d = %3d\n", i, k, i * k);
			}
			printf_s("\n");
		}

	}
	else if (a > b) {
		for (int i = b;i <= a;i++) {
			for (int k = 1; k <= 12;k++) {
				printf_s(" %2d x %2d = %3d\n", i, k, i * k);
			}
			printf_s("\n");
		}
	}
	else {
		printf_s("Sorry!! your number equal T_T");
	}

	return 0;
}