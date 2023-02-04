#include <bits/stdc++.h>
using namespace std;
int r, n, k, arr[100001], l, mid, ans;
bool isVaild(int x) {
	int sum = 0, post = 0, i = 1;
	while (i <= n) {
		if (arr[i] - post <= x) { // 如果距离比你给的距离小那就跳过 直接判断下一个
			post = arr[i];
			++i;
		} else {
			++sum;
			post += x; // 新设一个路标(一会儿要是还是比你给的距离大的话又会回到这里加一个路标)
			if (sum > k) {
				return 0;
			}
		}
	}
	/*
	处理hack数据
	*/
	if (post < r) {
		return 0;
	} else {
		return 1;
	}
}
signed main() {
	cin >> r >> n >> k;
	for (int i = 1;i <= n;++i) {
		scanf("%d", &arr[i]);
	}
	l = 0;
	while (l <= r) {
		mid = (l + r) >> 1;
		if (isVaild(mid)) {
			r = mid - 1;
			ans = mid;
		} else {
			l = mid + 1;
		}
	}
	cout << ans;
}