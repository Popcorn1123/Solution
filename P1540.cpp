#include<bits/stdc++.h>
using namespace std;
int n, m, ans, a[1001];
int main() {
	cin >> m >> n;
	vector<int> v;
	for (int i = 1;i <= n;++i) {
		cin >> a[i];
		if (v.size() > m) {
			v.erase(v.begin());
		}
		if (find(v.begin(), v.end(), a[i]) == v.end()) { // 内存中没找到
			v.push_back(a[i]);
			++ans;
		}
	}
	cout << ans;
	return 0;	
}