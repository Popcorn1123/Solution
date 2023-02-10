#include <bits/stdc++.h>
using namespace std;
int arr[5];
signed main() {
	int i;
	for (i = 1; i <= 3; ++i) 
		cin >> arr[i];
	sort(arr + 1, arr + 1 + 3);
	printf("%d %d %d\n", arr[1], arr[2], arr[3]);
	return 0;
}