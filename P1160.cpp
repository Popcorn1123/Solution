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
struct node{
	int l,r;
	bool kicked;
}g[100001];
int n,m,k,p;
void add(int u,int k,int p){//把u节点插到k的左边或右边
	if(p==1){
		g[u].r=g[k].r;g[g[k].r].l=u;
		g[u].l=k;g[k].r=u;
	}else{
		g[u].l=g[k].l,g[g[k].l].r=u;
		g[u].r=k,g[k].l=u;
	}
}
signed main() {
	cin>>n;
	add(1,0,1);
	fz(i,2,n){
		read(k),read(p);
		add(i,k,p);
	}
	cin>>m;
	while(m--){
		read(k);
		g[k].kicked=1;
	}
	for(int i=g[0].r;i;i=g[i].r){
		if(!g[i].kicked) printf("%d ",i);
	}
	return 0;
}