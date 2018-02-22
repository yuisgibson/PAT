#include<cstdio>

int n;

int main() {
	scanf("%d", &n);

	for (int i = 0;i != n;++i) {
		long long a, b, c;
		scanf("%lld%lld%lld", &a, &b, &c);
		if (a + b>c)printf("Case #%d: true\n", i + 1);
		else printf("Case #%d: false\n", i + 1);
	}

	return 0;
}