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
int n,sum;
void subtask1(int n){
	sum=0;
	fz(i,1,n){
		fz(j,1,n){
			sum++;
			if(sum<10){
				printf("0%d",sum);
			} else printf("%d",sum);
		}
		printf("\n");
	}
}
void subtask2(int n){
	sum=0;
	fz(i,1,n){
		fz(_,1,(n-i)*2) printf(" ");
		fz(j,1,i){
			sum++;
			if(sum<10){
				printf("0%d",sum);
			} else printf("%d",sum);
		}
		printf("\n");
	}
}
signed main() {
	cin>>n;
	subtask1(n);
	
	printf("\n");
	
	subtask2(n);
	
	return 0;
}