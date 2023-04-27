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
short dx[9]={1,-1,0,0,1,1,-1,-1},dy[9]={0,0,1,-1,1,-1,1,-1};
int m,n,g[105][105]={{0}},cnt=0;
queue<pii> q;
void dfs(int x,int y){
	g[x][y]=0;
	int xx,yy;
	fz(i,1,8){
		fz(j,1,8){
			xx=x+dx[i];yy=y+dy[j];
			if(g[xx][yy]==1)dfs(xx,yy);
		}
	}
}
void bfs(int x,int y){
	g[x][y]=0;
	int xx,yy;
	pii pos;
	q.push(mp(x,y));
	while(!q.empty()){
		pos=q.front();
		q.pop();
		fz(i,1,8){
			fz(j,1,8){
				xx=pos.fi+dx[i];yy=pos.se+dy[j];
				if(g[xx][yy]==1){
					q.push(mp(xx,yy));
					g[xx][yy]=0;
				}
			}
		}
		
	}
	
}
signed main() {
	cin>>n>>m;
	char ch;
	fz(i,1,n){
		fz(j,1,m){
			cin>>ch;
			if(ch=='W')g[i][j]=1;
		}
	}
	fz(i,1,n){
		fz(j,1,m){
			if(g[i][j]==1){
				// dfs(i,j);
				bfs(i,j);
				++cnt;
			}
		}
	}
	cout<<cnt<<endl;
	return 0;
}