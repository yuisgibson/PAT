#include<cstdio>

int n, m;
int num[110];
bool flag = 0;

int main() {
	scanf("%d%d", &n, &m);
	for (int i = 0;i<n;++i) {
		scanf("%d", &num[i]);
	}
	m = m%n;
	for (int i = 0;i<m;++i) {
		if (flag == 1)printf(" ");
		flag = 1;
		printf("%d", num[n - m + i]);
	}
	for (int i = 0;i<n - m;++i) {
		if (flag == 1)printf(" ");
		flag = 1;
		printf("%d", num[i]);
	}
	return 0;
}