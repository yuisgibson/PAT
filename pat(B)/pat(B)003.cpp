#include<cstdio>
#include<cstring>
int n;

int main() {
	scanf("%d", &n);

	for (int i = 0;i != n;++i) {
		char str[110];
		scanf("%s", str);
		int len = strlen(str);

                int la = 0, ma = 0, ra = 0, pcount = 0, tcount = 0;;
                int fla = 0, fra = 0, flag = 0;
		for (int j = 0;j != len;++j) {
			if (str[j] != 'P'&&str[j] != 'A'&&str[j] != 'T') {
				flag = 1;
				break;
			}
			else {
				if (str[j] == 'P') {
					pcount++;
				}
				if (str[j] == 'T') {
					tcount++;
				}
			}
			if (str[j] != 'P'&&fla == 0) {
				++la;
				continue;
			}
			if (str[j] == 'P'&&fla == 0) {
				fla = 1;
				continue;
			}
			if (str[j] != 'T'&&fla == 1 && fra == 0) {
				++ma;
				continue;
			}
			if (str[j] == 'T'&&fla == 1 && fra == 0) {
				fra = 1;
				continue;
			}
			if (fla == 1 && fra == 1) {
				++ra;
				continue;
			}
		}
		if (flag == 1 || ma == 0 || pcount != 1 || tcount != 1) {
			printf("NO\n");
			continue;
		}
		if (la + la*(ma - 1) == ra) {
			printf("YES\n");
		}
		else {
			printf("NO\n");
		}
	}
	return 0;
}
