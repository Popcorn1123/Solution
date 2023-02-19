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
const int MAXN=401;
const int dx[8]={-1,-2,-2,-1,1,2,2,1};
const int dy[8]={2,1,-1,-2,2,1,-1,-2};
queue<pii> q;
int n,m,x,y,f[MAXN][MAXN],u,v,xx,yy;
bool vis[MAXN][MAXN];
signed main() {
	cin>>n>>m>>x>>y;
	fill1(f);fill0(vis);
	q.push(mp(x,y));f[x][y]=0;vis[x][y]=1;
	while(!q.empty()){
		xx=q.front().fi,yy=q.front().se;q.pop();
		fz(i,0,7){
			u=xx+dx[i];v=yy+dy[i];
			if(u<1||u>n||v<1||v>m||vis[u][v]) continue;
			f[u][v]=f[xx][yy]+1,vis[u][v]=1;q.push(mp(u,v));
		}
	}
	fz(i,1,n){
		fz(j,1,m){
			printf("%-5d",f[i][j]);
		}
		printf("\n");
	}
	return 0;
}