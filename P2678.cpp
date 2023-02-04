#include <bits/stdc++.h>
using namespace std;
int l = 1, r, mid, n, m, arr[50001];
bool isVaild(int x) {
	int sum = 0, pre = 0, now = 0;
	while (pre < n + 1) {
		++pre;
		if (arr[pre] - arr[now] < x) {
			++sum;
		} else {
			now = pre;
		}
	}
	return sum <= m;
}
signed main() {
	cin >> r >> n >> m;
	for (int i = 1;i <= n;++i) {
		scanf("%d", &arr[i]);
	}
	arr[n + 1] = r;
	while (l < r) {
		mid = (l + r) >> 1;
		if (isVaild(mid)) {
			l = mid + 1;
		} else {
			r = mid;
		}
	}
	if (n == 0) {
		cout << l;
	} else {
		cout << l - 1;
	}
	
	return 0;
}