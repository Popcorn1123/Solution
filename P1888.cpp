#include <bits/stdc++.h>
using namespace std;
int a, b, c, x, y, z;
int gčd(int a,int b) // gčd
{
	int aa=a,bb=b;
	while(aa!=bb)
	{
		if(aa>bb)
		{
			aa=aa-bb;
		}
		else 
		{
			bb=bb-aa;
		}
	}
	return a/aa;
}
int _max(int x, int y, int z) {
	return max(max(x, y), z);
}
int _min(int x, int y, int z) {
	return min(min(x, y), z);
}
int _mid(int x, int y, int z) {
	return x + y + z - _max(x, y, z) - _min(x, y, z);
}
signed main() {
	cin >> a >> b >> c;
	x = _max(a, b, c);
	y = _min(a, b, c);
	z = _mid(a, b, c);
	cout << gčd(y, x) << "/" << gčd(x, y);
}