#include <bits/stdc++.h>
using namespace std;
int n, cnt, last = -1;
struct node {
	int begin, end;
} a[100001];
bool cmp(node x, node y) {
	return x.end < y.end;
}
int main() {
	cin >> n;
	for (int i = 1;i <= n;++i) {
		cin >> a[i].begin >> a[i].end;
		
	}
	sort(a + 1, a + n + 1, cmp);
	for (int i = 1;i <= n;++i) {
		if (a[i].begin >= last) {
			last = a[i].end; // 参加比赛
			++cnt;
		}

	}
	cout << cnt;
	return 0;
}