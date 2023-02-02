#include <bits/stdc++.h>
using namespace std;
#define ll long long
int n, x, a[100001];
ll ans;// 草忘记开ll
signed main() {
	cin >> n >> x;
	for (int i = 1;i <= n;++i) {
		scanf("%d", &a[i]);
	}
	for (int i = 1;i < n;++i) {
		if (a[i] + a[i + 1] > x) {
			ans += a[i + 1] + a[i] - x;
			a[i + 1] = x - a[i]; // 贪心 每次吃两坨的后一坨
		}
	}
	cout << ans;
}