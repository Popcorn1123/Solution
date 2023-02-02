#include <bits/stdc++.h>
using namespace std;
int n, tmp, x, y, ans;
priority_queue<int, vector<int>, greater<int>> pq;
int main() {
	cin >> n;
	for (int i = 1;i <= n;++i) {
		scanf("%d", &tmp);
		pq.push(tmp);
	}
	while (pq.size() > 1) {
		x = pq.top();pq.pop();
		y = pq.top();pq.pop();
		pq.push(x + y);
		ans += x + y;
	}
	cout << ans;
	return 0;
}