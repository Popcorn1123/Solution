#include <bits/stdc++.h>
using namespace std;
int m, t, s, sum;
signed main() {
	cin >> m >> t >> s;
	if (t == 0) {
		if (s == 0) {
			sum = 0;
		} else {
			sum = m;
		}
	} else {
		sum = ceil(1.0 * s / t);
	}
	if (m - sum >= 0) {
		cout << m - sum;
	} else {
		cout << 0;
	}
	return 0;
}