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
const int MAXN=101;
int n,m,pre[MAXN],p,cnt;//p是当前节点的前驱节点
queue<int> q;
void subtask1(){
	fz(i,0,n-1){//这里因为下面的p=pre[p]要执行m-1次 如果不从0开始赋值
		pre[i]=i+1;
	}
	pre[n]=1; //构建循环链表
	fz(_,1,n){
		fz(__,1,m-1){ //移动m-1次到达被杀的人前面一个位置
			p=pre[p];
		}
		cout<<pre[p]<<" ";//pre[p]就是被杀的人
		pre[p]=pre[pre[p]];
	}
}
void subtask2(){
	fz(i,1,n){
		q.push(i);
	}
	while(!q.empty()){
		cnt++;
		if(cnt%m) q.push(q.front()),q.pop();
		else printf("%d ",q.front()),q.pop();
	}
}
signed main() {
	cin>>n>>m;
	// subtask1(); //链表
	subtask2(); //队列
	
	return 0;
}