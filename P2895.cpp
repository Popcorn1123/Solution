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
#define fillbig(a) memset(a,99999,sizeof(a))
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
const int MAXN=310;
const int dx[5]={0,0,1,-1};
const int dy[5]={1,-1,0,0};
int g[MAXN][MAXN],m,x,y,f[MAXN][MAXN],xx,yy,u,v,tmp;
queue<pii> q;
bool vis[MAXN][MAXN];
int parse(int x){
	return x==-1?99999:x;
}
signed main() {
	cin>>m;
	fill1(g);
	fz(i,1,m){
		read(x),read(y);
		read(tmp);
		if(g[x][y]==-1) g[x][y]=tmp;
		else chkmin(g[x][y],tmp);
		fz(j,0,3){
			u=x+dx[j],v=y+dy[j];
			if(u<0||v<0||u>305||v>305) continue;
			if(g[u][v]==-1) g[u][v]=tmp;
			else chkmin(g[u][v],tmp);
		}
	}
	q.push(mp(0,0));f[0][0]=0;vis[0][0]=1;
	while(!q.empty()){
		xx=q.front().fi,yy=q.front().se;q.pop();
		fz(i,0,3){
			u=xx+dx[i],v=yy+dy[i];
			if(u<0||v<0||v>=305||u>=305||vis[u][v]||f[xx][yy]+1>parse(g[xx][yy])) continue;
			f[u][v]=f[xx][yy]+1;vis[u][v]=1;q.push(mp(u,v));
			if(g[u][v]==-1){
				printf("%d",f[u][v]);
				return 0;
			}
		}
	}
	puts("-1");
	return 0;
}