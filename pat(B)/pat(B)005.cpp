#include<cstdio>

int n;
int num[10010] = { 0 };

int main() {
	scanf("%d", &n);

	for (int i = 0;i != n;++i) {
		int th;
		scanf("%d", &th);
		num[th]--;
		while (th != 1) {
			if (th % 2 == 0) {
				th /= 2;
				num[th]++;
			}
			else {
				th = (th * 3 + 1) / 2;
				num[th]++;
			}
		}
	}

	int f = 0;
	for (int i = 100;i >= 0;--i) {
		if (num[i] == -1) {
			if (f != 0)
				printf(" ");
			else
				f = 1;

			printf("%d", i);
		}
	}

	return 0;
}