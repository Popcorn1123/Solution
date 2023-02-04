#include <bits/stdc++.h>
using namespace std;
char ra[10001];
int arr[10001], n, maxn = -1, minn = 10000, step[10001], len, minstep = 100000;
signed main() {
	cin >> n;
	for (int _ = 1;_ <= n;++_) {
		memset(step, 0, sizeof(step));
		minstep = 10000;
		cin >> ra;
		len = strlen(ra);
		for (int i = 0;i < len;++i) {
			arr[i + 1] = ra[i] ^ 48;
			maxn = max(arr[i + 1], maxn);
			minn = min(arr[i + 1], minn);
		}
		for (int i = minn;i <= maxn;++i) {
			for (int j = 1;j <= len;++j) {
				step[i] += fabs(arr[j] - i);
			}
			minstep = min(step[i], minstep);
		}
		cout << minstep << endl;
	}
}