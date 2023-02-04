#include <bits/stdc++.h>
using namespace std;
int m, n, stu[100001], sch[100001], mid, l, r;
long long ans = 0;
signed main() {
	cin >> m >> n; // m表示学校数 n表示学生数
	for (int i = 1;i <= m;++i) {
		scanf("%d", &sch[i]);
	}
	for (int i = 1;i <= n;++i) {
		scanf("%d", &stu[i]);
	}
	sort(sch + 1, sch + m + 1);
	for (int i = 1;i <= n;++i) { // 二分法分配sch[]
		l = 1;r = m;
		while (l < r) {
			mid = (l + r) >> 1;
			if (sch[mid] > stu[i]) {
				r = mid;
			} else {
				l = mid + 1;
			}
		}
		if (stu[i] < sch[1]) {
			ans += sch[1] - stu[i];
		} else {
			ans += min(abs(sch[l] - stu[i]), abs(sch[l - 1] - stu[i]));
		}
	}
	cout << ans;
}