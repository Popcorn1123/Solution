#include <bits/stdc++.h>
using namespace std;
int n, local, remote;
signed main() {
	cin >> n;
	local = n * 5;
	remote = 11 + n * 3;
	if (local < remote)
		puts("Local");
	else
		puts("Luogu");
	return 0;
}