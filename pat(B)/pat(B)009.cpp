#include<cstdio>

char str[100][100];
int i = 0;

int main() {
	while (scanf("%s", str[i++]) != EOF) {}
	for (int j = i - 2;j >= 0;--j) {
		if (j != i - 2)printf(" ");
		printf("%s", str[j]);
	}
	return 0;
}