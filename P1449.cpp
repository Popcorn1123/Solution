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
stack<int> st;
char opt;
int n,x,y;
signed main() {
	while(1){
		opt=getchar();
		// cin>>opt;
		if(opt=='@') break;
		if(opt=='+'){
			y=st.top();st.pop();
			x=st.top();st.pop();
			st.push(x+y);
		}
		if(opt=='-'){
			y=st.top();st.pop();
			x=st.top();st.pop();
			st.push(x-y);
		}
		if(opt=='*'){
			y=st.top();st.pop();
			x=st.top();st.pop();
			st.push(x*y);
		}
		if(opt=='/'){
			y=st.top();st.pop();
			x=st.top();st.pop();
			st.push(x/y);
		}
		if(opt=='.'){
			st.push(n);
			n=0;
		}
		if(opt>='0'&&opt<='9'){ //会读入其他字符
			n=n*10+opt-'0';
		}
	}
	cout<<st.top()<<endl;
	return 0;
}