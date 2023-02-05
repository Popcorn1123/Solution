#include <bits/stdc++.h>
using namespace std;
int n, r, a[30], b[30];
signed main() {
	cin >> n >> r;
	for (int i = 1;i <= n;++i) {
		a[i] = i;
	}
	do {
		memset(b, 0, sizeof(b));
		for (int i = 1;i <= r;++i) {
			b[r-i+1] = a[i]; // a=1234 b=432
			// a[i] /= 10;
			cout << b[r-i+1];
		}
		cout << endl;
	} while (next_permutation(a + 1, a + 1 + n));
	return 0;
}