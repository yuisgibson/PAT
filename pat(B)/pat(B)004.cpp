#include<cstdio>
#include<algorithm>
using namespace std;

struct stu {
	char name[15];
	char id[15];
	int socre;
}st[110];

bool cmp(stu a, stu b) {
	return a.socre>b.socre;
}

int n;

int main() {
	scanf("%d", &n);

	for (int i = 0;i != n;++i) {
		scanf("%s%s%d", st[i].name, st[i].id, &st[i].socre);
	}

	sort(st, st + n, cmp);

	printf("%s %s\n%s %s", st[0].name, st[0].id, st[n - 1].name, st[n - 1].id);

	return 0;
}