#include <bits/stdc++.h>
using namespace std;
double m, h, sub;
signed main() {
	scanf("%lf %lf", &m, &h);
	sub = 1.0 * m / (h * h);
	if (sub < 18.5) 
		puts("Underweight");
	else if (sub >= 18.5 && sub < 24) 
		puts("Normal");
	else if (sub >= 24) {
		cout << sub << endl;
		puts("Overweight");
	}
	return 0;
}