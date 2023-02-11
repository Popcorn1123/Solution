#include <bits/stdc++.h>
using namespace std;
int y, m;
bool flag;
signed main() {
	cin >> y >> m;
	if (y % 4 == 0) {
		if (y % 100 == 0) {
			if (y % 400 == 0) 
				flag = 1;
		} else 
			flag = 1;
	}
	if (m == 2) {
		if (flag)
			puts("29");
		else
			puts("28");
	}
	else if (m == 1  || 
		m == 3  || 
		m == 5  || 
		m == 7  || 
		m == 8  || 
		m == 10 || 
		m == 12 )
		puts("31");
	else
		puts("30");
}