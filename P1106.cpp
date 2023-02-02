#include <bits/stdc++.h>
using namespace std;
char ra[260];
int arr[260], len;
int main() {
	cin >> ra;
	len = strlen(ra);
	for (int i = 0;i < len;++i) {
		arr[i + 1] = ra[i] ^ 48;
	}
	for (int i = 2;i <= len;++i) {
		if (a[i] > a[i + 1]) {
			// 删掉
		}
	}
}