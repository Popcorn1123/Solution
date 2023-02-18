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
const int MAXN=100001;
double a[MAXN],b[MAXN],n,p,sum;
double ans,l=0,r=1e10,mid;
bool judge(double x){
	double all=p*x,s1=0;
	fz(i,1,n){
		if(b[i]-a[i]*x<0){
			s1+=a[i]*x-b[i];
		}
	}
	return s1<=all;
}
signed main() {
	cin>>n>>p;
	fz(i,1,n){
		scanf("%lf %lf",&a[i],&b[i]);
		sum+=a[i];
	}
	if(sum<=p){ //可以无限使用
		puts("-1.000000\n");
		return 0;
	}
	while(r-l>1e-6){
		mid=(l+r)/2;
		if(judge(mid)){
			l=mid;
			// ans=mid;
		}else{
			r=mid;
		}
	}
	cout<<l<<endl;
	return 0;
}