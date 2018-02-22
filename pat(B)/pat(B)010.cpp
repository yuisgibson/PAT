#include<cstdio>

int num[10010];
int cnt = 0;

int main() {
	while (scanf("%d", &num[cnt++]) != EOF) {}
	cnt--;
	if (num[0] * num[1] == 0)printf("0 0");
	for (int i = 0;i<cnt;i += 2) {
		if (num[i] != 0 && num[i + 1] != 0) {
			if (i != 0)printf(" ");
			printf("%d %d", num[i] * num[i + 1], num[i + 1] - 1);
		}
	}
	return 0;
}