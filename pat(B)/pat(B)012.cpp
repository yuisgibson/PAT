#include<cstdio>

int n, a1 = 0, a2 = 0, a3 = 0, a4 = 0, a5 = 0;
int ca2 = 0, fa2 = 0, ca4 = 0;

int main() {
	scanf("%d", &n);

	for (int i = 0;i != n;++i) {
		int tmp;
		scanf("%d", &tmp);
		if (tmp % 10 == 0)
			a1 += tmp;
		if (tmp % 5 == 1) {
			if (fa2 == 0) {
				ca2++;
				a2 += tmp;
				fa2 = 1;
			}
			else {
				ca2++;
				a2 -= tmp;
				fa2 = 0;
			}
		}
		if (tmp % 5 == 2)
			++a3;
		if (tmp % 5 == 3) {
			ca4++;
			a4 += tmp;
		}
		if (tmp % 5 == 4 && tmp >= a5)
			a5 = tmp;
	}
	if (a1 == 0)
		printf("N");
	else
		printf("%d", a1);
	if (ca2 == 0)
		printf(" N");
	else
		printf(" %d", a2);
	if (a3 == 0)
		printf(" N");
	else
		printf(" %d", a3);
	if (a4 == 0)
		printf(" N");
	else
		printf(" %.1lf", ((double)a4) / ca4);
	if (a5 == 0)
		printf(" N");
	else
		printf(" %d", a5);
	return 0;
}