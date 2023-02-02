#include <bits/stdc++.h>
using namespace std;
int n, tmp;
priority_queue<int, vector<int>, greater<int>> pq;
int main() {
	cin >> n;
	for (int i = 1;i <= n;++i) {
		scanf("%d", &tmp);
		pq.push(tmp);
	}
	while (pq.size() > 0) {
		cout << pq.top() << " ";
		pq.pop();
	}
	return 0;
}