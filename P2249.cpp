#include <bits/stdc++.h>
using namespace std;
int n, m, arr[1000001], mi, res;
inline void write(int x) {
  	static int sta[35];
  	int top = 0;
  	do {
    	sta[top++] = x % 10, x /= 10;
  	} while (x);
  	while (top) putchar(sta[--top] + 48);  // 48 是 '0'
}
inline int read() {
  	int x = 0, w = 1;
  	char ch = 0;
  	while (ch < '0' || ch > '9') {  // ch 不是数字时
    	if (ch == '-') w = -1;        // 判断是否为负
    	ch = getchar();               // 继续读入
  	}
  	while (ch >= '0' && ch <= '9') {  // ch 是数字时
    	x = (x<<3)+(x<<1) + (ch - '0');  // 将新读入的数字’加’在 x 的后面
    	// x 是 int 类型，char 类型的 ch 和 ’0’ 会被自动转为其对应的
    	// ASCII 码，相当于将 ch 转化为对应数字
    	// 此处也可以使用 (x<<3)+(x<<1) 的写法来代替 x*10
    	ch = getchar();  // 继续读入
  	}
  	return x * w;  // 数字 * 正负号 = 实际数值
}
int find(int l, int r, int x) {
	int mid;
	while (l <= r) {
		mid = (l + r) / 2;
		if (arr[mid] >= x) {
			r = mid - 1; // bugs
		} else {
			l = mid + 1;
		}
	}
	if (arr[l] == x) return l;
	else return -1;
}
int main() {
	n = read();m = read();
	for (int i = 1;i <= n;++i) {
		arr[i] = read();
	}
	while (m--) {
		mi = read();
		res = find(1, n, mi);
		printf("%d ", res);
	}
	return 0;
}