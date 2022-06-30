#include <stdio.h>

typedef long long int64_t;

int64_t Run(int64_t n) {
	int i;
	while (1) {
		if (n == 0) break;

		for (i = 1; n != 1; i++) {
			if (n & 1) {
				n *= 3;
				n++;
			}
			else {
				n /= 2;
			}
		}
		return i - 1;
	}
}

int main() {
	int max = 0;

	for (int i = 2; i < 0xffffffff; i++) {
		int64_t count = Run(i);
		if (count > max) {
			printf("%-16d", i);
			printf(" : % d times\n", count);
			max = count;
		}
	}
}