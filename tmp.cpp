#include <bits/stdc++.h>
using namespace std;
char test500[500];
int main() {
	memset(test500,'0',sizeof(test500));
	cin>>(test500+1);
	for(int i=0;i<=499;++i)cout<<test500[i];
	return 0;
}