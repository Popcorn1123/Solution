#include <bits/stdc++.h>
using namespace std;
#define fi first
#define se second
#define fz(i,a,b) for(int i=a;i<=b;++i)
#define fd(i,a,b) for(int i=a;i>=b;--i)
#define rpt(n) for(int _tmp=1;_tmp<=n;++_tmp)
#define ffe(it,v) for(__typeof(v.begin()) it=v.begin();it!=v.end();++it)
#define fill0(a) memset(a,0,sizeof(a))
#define fill1(a) memset(a,-1,sizeof(a))
#define fillbig(a) memset(a,63,sizeof(a))
#define pb push_back
#define ppb pop_back
#define mp make_pair
template<typename T1,typename T2> void chkmin(T1 &x,T2 y){if(x>y) x=y;}
template<typename T1,typename T2> void chkmax(T1 &x,T2 y){if(x<y) x=y;}
typedef pair<int,int> pii;
typedef long long ll;
template<typename T> void read(T &x){
	x=0;char c=getchar();T neg=1;
	while(!isdigit(c)){if(c=='-') neg=-1;c=getchar();}
	while(isdigit(c)) x=x*10+c-'0',c=getchar();
	x*=neg;
}
const int INF=0x3f3f3f3f;
const int MAXN=15;
int n,arrs[MAXN],arrb[MAXN],ans=INF;
void dfs(int i,int s,int b){
	if(i>n){
		if(s==1&&b==0) return; //清水
		chkmin(ans,abs(s-b));
		return;
	}
	dfs(i+1,s*arrs[i],b+arrb[i]);
	dfs(i+1,s,b);
}
signed main() {
	read(n);
	fz(i,1,n) read(arrs[i]),read(arrb[i]);
	dfs(1,1,0);
	cout<<ans<<endl;
	return 0;
}