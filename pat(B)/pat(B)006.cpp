#include<iostream>
#include<string>
using namespace std;

string num;

int main() {
	cin >> num;
	for (int i = 0;i != num.length();++i) {
		if (num.length() - i == 3) {
			for (int j = 0;j != num[i] - '0';++j) {
				cout << "B";
				continue;
			}
		}
		if (num.length() - i == 2) {
			for (int j = 0;j != num[i] - '0';++j) {
				cout << "S";
				continue;
			}
		}
		if (num.length() - i == 1) {
			for (int j = 1;j <= num[i] - '0';++j) {
				cout << j;
				continue;
			}
		}
	}
	return 0;
}