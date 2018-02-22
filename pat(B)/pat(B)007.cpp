#include<cstdio>

int n, count = 0;;
bool vis[100010] = { 0 };
int prime[100010] = { 0 };


int isprime(int n) {
	int cnt = 0;
	for (int i = 2;i <= n;++i) {
		if (!vis[i]) {
			prime[cnt++] = i;
		}
		for (int j = 0;j<cnt&&i*prime[j]<n;++j) {
			vis[i*prime[j]] = 1;
			if (i%prime[j] == 0)break;
		}
	}
	return cnt;
}

int main() {
	scanf("%d", &n);
	int cnt = isprime(n);
	for (int i = 1;i != cnt;++i) {
		if (prime[i] - prime[i - 1] == 2) {
			++count;
		}
	}
	printf("%d", count);
	return 0;
}