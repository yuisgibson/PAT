#include<cstdio>

int n, count = 0;

int main() {

	scanf("%d", &n);

	while (n != 1) {

		if (n % 2 == 0) {
			n /= 2;
		}
		else {
			n = (3 * n + 1) / 2;
		}

		++count;
	}

	printf("%d", count);

	return 0;
}