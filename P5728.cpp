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
const int MAXN=1000;
struct node{
	int x,y,z,tot;
}a[MAXN+1];
int n,cnt;
bool check(node aa,node bb){ return abs(aa.x-bb.x)<=5&&abs(aa.y-bb.y)<=5&&abs(aa.z-bb.z)<=5&&abs(aa.tot-bb.tot)<=10;}
signed main() {
	cin>>n;
	fz(i,1,n){
		read(a[i].x),read(a[i].y),read(a[i].z);
		a[i].tot=a[i].x+a[i].y+a[i].z;
	}
	fz(i,1,n){
		fz(j,i+1,n){
			if(check(a[i],a[j])){
				cnt++;
			}
		}
	}
	cout<<cnt<<endl;
}