#include <bits/stdc++.h>
using namespace std;
int n, t;
double res;
struct node {
	int m, v;
	double rank;
} a[110];
bool cmp(node x, node y) { // 按性价比从大到小排序
	return x.rank > y.rank;
}
int main() {
	cin >> n >> t;
	for (int i = 1;i <= n;++i) {
		cin >> a[i].m >> a[i].v;
		a[i].rank = 1.0 * a[i].v / a[i].m; // 算出性价比
	}
	sort(a + 1, a + 1 + n, cmp);
	for (int i = 1;i <= n;++i) {
		if (t - a[i].m >= 0) { // 可以完全装下
			t -= a[i].m; // 直接装a[i]
			res += a[i].v;
		} else if (t > 0) { // 装不下要分割
			res += t * a[i].rank;
			t = 0;
		} else { // 没空间了
			break;
		}
		
	}
	// cout << res;
	printf("%.2lf", res);
	return 0;
}