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
int n,m,dx[5]={1,-1,0,0},dy[5]={0,0,1,-1},cnt=0;
char g[304][304];
pii tp[26][2];
bool vis[304][304],tppos[26];
struct node{
	int x,y,step;
}qidian,zhongdian,pos,mod;
queue<node> q;
signed main() {
	cin>>n>>m;
	fz(i,1,n){
		fz(j,1,m){
			cin>>g[i][j];
			if(g[i][j]=='@')qidian.x=i,qidian.y=j;
			if(g[i][j]=='=')zhongdian.x=i,zhongdian.y=j;
			if(g[i][j]>='A'&&g[i][j]<='Z'){
				tp[g[i][j]-'A'+1][tppos[g[i][j]-'A'+1]]=mp(i,j);
				tppos[g[i][j]-'A'+1]=!tppos[g[i][j]-'A'+1];
			}
		}
	}
	q.push(qidian);
	vis[qidian.x][qidian.y]=1;
	int xx,yy;
	while(!q.empty()){
		pos=q.front();
		q.pop();
		if(pos.x==zhongdian.x&&pos.y==zhongdian.y){
			cout<<pos.step<<endl;
			return 0;
		}
		fz(i,1,4){
			fz(j,1,4){
				xx=pos.x+dx[i],yy=pos.y+dy[j];
				if(xx<1||xx>n||yy<1||yy>n||vis[xx][yy]||g[xx][yy]=='#')continue;
				mod.x=xx,mod.y=yy,mod.step=pos.step+1;
				q.push(mod);
				vis[xx][yy]=1;
				if(g[xx][yy]>='A'&&g[xx][yy]<='Z'){
					tppos[g[xx][yy]-'A'+1]=!tppos[g[xx][yy]-'A'+1];
					mod.x=tp[g[xx][yy]-'A'+1][tppos[g[xx][yy]-'A'+1]].fi,mod.y=tp[g[xx][yy]-'A'+1][tppos[g[xx][yy]-'A'+1]].se,mod.step=pos.step+1;
					q.push(mod);
					vis[tp[g[xx][yy]-'A'+1][tppos[g[xx][yy]-'A'+1]].fi][tp[g[xx][yy]-'A'+1][tppos[g[xx][yy]-'A'+1]].se]=1;
				}
			}
		}
	}
}