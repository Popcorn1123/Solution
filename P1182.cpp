#include <bits/stdc++.h>
using namespace std;
int n, m, arr[100001], l, r, mid, maxn = -114514, ans;
bool judge(int x) {
	int sum = 1, cur = 0; // cur表示目前已经累加的和
	for (int i = 1;i <= n;++i) {
		if (cur + arr[i] > x) {
			++sum;
			cur = arr[i];
		} else {
			cur += arr[i];
		}
	}
	return sum <= m;
}
signed main() {
	cin >> n >> m;
	for (int i = 1;i <= n;++i) {
		scanf("%d", &arr[i]);
		maxn = max(arr[i], maxn);
	}
	l = maxn, r = 1000000000;
	while (l <= r) {
		mid = l + r >> 1;
		if (judge(mid)) {
			r = mid - 1;
			ans = mid;
		} else {
			l = mid + 1;
		}
	}
	cout << ans;
}