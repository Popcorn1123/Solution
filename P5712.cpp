#include <bits/stdc++.h>
using namespace std;
int n;
signed main() {
	scanf("%d", &n);
	if (n == 1 || n == 0)
		printf("Today, I ate %d apple.\n", n);
	else 
		printf("Today, I ate %d apples.\n", n);
	return 0;
}