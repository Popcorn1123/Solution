#include <bits/stdc++.h>
using namespace std;
char ra[260];
int arr[260], len, n;
bool flag;
int main() {
	cin >> ra;
	cin >> n;
	len = strlen(ra);
	// reverse(ra + 1, ra + 1 + len);
	for (int i = 0;i < len;++i) {
		arr[i + 1] = ra[i] ^ 48;
	}
	
	for (int i = 1;i <= n;++i) {
		for (int j = 1;j <= len;++j) {
			if (arr[j] > arr[j + 1]) {
				for (int k = j;k <= len;++k) {
					arr[k] = arr[k + 1];
				}
				--len;
				break;
			}
		}
	}
	for (int i = 1;i <= len;++i) {
		if (arr[i]) flag = 1;
		if (flag) printf("%d", arr[i]);
	}
	if (!flag) puts("0");
}