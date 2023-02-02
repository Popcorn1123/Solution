#include <bits/stdc++.h>
using namespace std;
char ra[601], rb[601];
short a[601], b[601], la, lb;
bool flag;
int main() {
	memset(a, 0, sizeof(a));
	memset(b, 0, sizeof(b));
	cin >> ra >> rb;
	la = strlen(ra);lb = strlen(rb);
	reverse(ra, ra+la);reverse(rb, rb+lb);
	// 把输入的两个数倒着存储进a[], b[]
	for (int i = 0;ra[i] != '\0';i++) {
		a[i] = ra[i] ^ 48;
	}
	for (int i = 0;rb[i] != '\0';i++) {
		b[i] = rb[i] ^ 48;
	}
	for (int i = 0;i < 600;i++) {
		b[i] += a[i];
		if (b[i] > 9) { // 进位
			b[i+1] += b[i] / 10;
			b[i] %= 10;
		}
	}
	for (int i = 600;i >= 0;i--) {
		if (b[i]) flag = true;
		if (flag) cout << b[i];
	}
	if (!flag) cout << "0";
	return 0;
}
