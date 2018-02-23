#include<cstdio>

int vis[1000010] = { 0 };
int prime[1000010] = { 0 };

int isprime(int n) {
	int cnt = 0;
	for (int i = 2;i <= n;++i) {
		if (!vis[i]) {
			prime[cnt++] = i;
		}
		for (int j = 0;j<cnt&&prime[j] * i<n;++j) {
			vis[i*prime[j]] = 1;
			if (i%prime[j] == 0)break;
		}
	}
	return cnt;
}

int main() {
	isprime(1000000);
	int m, n, j = 0;
	scanf("%d%d", &m, &n);
	for (int i = m - 1;i<n;++i) {
		if (j % 10 == 0 && j != 0)printf("\n");
		if (j % 10 != 0)printf(" ");
		printf("%d", prime[i]);
		++j;
	}
	return 0;
}