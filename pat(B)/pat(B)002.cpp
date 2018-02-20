#include<iostream>
#include<string>
using namespace std;
string str[10] = { "ling","yi","er","san","si","wu","liu","qi","ba","jiu" };
string ss;
int sum = 0;

int main() {
	cin >> ss;
	for (int i = 0;i != ss.length();++i) {
		sum += ss[i] - '0';
	}
	string num = to_string(sum);
    for (int i = 0;i != num.length();++i) {
		if (i != 0) {
			cout << " ";
		}
		cout << str[num[i] - '0'];
	}
	return 0;
}