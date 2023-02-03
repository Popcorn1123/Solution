#include <bits/stdc++.h>
using namespace std;
#define int long long // 见祖宗
int n, m, arr[1000001], maxn = -1, mid, l, r, ans;
/*
如果合法就返回true向右寻找更大的
如果不合法就返回false向左寻找更小的
*/
bool isVaild(int x) {
	int sum = 0;
	for (int i = 1;i <= n;++i) {
		if (arr[i] > x) {
			sum += arr[i] - x;
		}
	}
	return sum >= m;
}
signed main() {
	scanf("%lld %lld", &n, &m);
	for (int i = 1;i <= n;++i) {
		scanf("%lld", &arr[i]);
		maxn = max(maxn, arr[i]);
	}
	// printf("%d\n", isVaild(16));
	l = 1, r = maxn;
	while (l < r) {
		mid = (l + r) / 2;
		if (isVaild(mid)) {
			l = mid + 1;
			ans = mid;
		} else {
			r = mid;
		}
	}
	printf("%lld\n", ans);
	return 0;
}
/*
optimize_2，嘿嘿嘿，我的黄子岩，我可爱的黄子岩....黄子岩...嘿嘿...喵喵喵喵喵.......好可爱...嘿嘿....黄子岩.…黄子岩....我的黄子岩..嘿嘿...……...黄子岩....赶紧让我吸一口.....啊啊啊黄子岩软软的身子还有软软的小爪爪....黄子岩..不会有人来救你的...你就让我吸吧嘿嘿嘿嘿嘿嘿嘿嘿....太可爱了.....小小的黄子岩..像小球球一样...嘿嘿....黄子岩..…..我的小黄子岩....嘿嘿....小黄子岩...好想一口吞掉........但是舍不得啊...我的小黄子岩..嘿嘿.....我的宝贝...我最可爱最萌的黄子岩....没有黄子岩.....我就要死掉了呢..我的黄子岩
*/