#include <bits/stdc++.h>
using namespace std;
#define fi first
#define se second
#define fz(i,a,b) for(int i=a;i<=b;++i)
#define fd(i,a,b) for(int i=a;i>=b;--i)
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
int n,m,pe[11]={1};
void print(int b){
	fz(i,1,b-1){
		printf("%d+",pe[i]);
	}
	printf("%d\n",pe[b]);
}
void dfs(int d){
	fz(i,pe[d-1],m){//后面的数大于前面的数
		if(i==n)return;
		pe[d]=i;
		m-=i;
		if(m==0) print(d);
		else dfs(d+1);
		m+=i;
	}
}
signed main() {
	scanf("%d",&n);
	m=n;
	dfs(1);
	return 0;
}