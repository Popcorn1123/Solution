#include <bits/stdc++.h>
using namespace std;
#define MAXLI 100000000
#define MAXN 100000
int n, k, arr[MAXN + 1], mid, l, r, ans;
/*
返回true:往右找
返回false:往左找
*/
bool isVaild(int x) {
	int sum = 0;
	for (int i = 1;i <= n;++i) {
		sum += arr[i] / x;
	}
	return sum >= k;
}
signed main() {
	cin >> n >> k;
	for (int i = 1;i <= n;++i) {
		scanf("%d", &arr[i]);
	}
	l = 1, r = MAXLI + 1;
	while (l < r) {
		mid = (l + r) >> 1;
		if (isVaild(mid)) {
			l = mid + 1;
			ans = mid;
		} else {
			r = mid;
		}
	}
	cout << ans;
}