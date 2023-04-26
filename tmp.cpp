#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAXN=1e6+10;

inline int read(){
    int x=0,f=1; char ch=getchar();
    while(ch<'0'||ch>'9') {if(ch=='-') f=-1; ch=getchar();}
    while(ch>='0'&&ch<='9') {x=(x<<3)+(x<<1)+(ch^48); ch=getchar();}
    return x*f;
}
inline ll readll(){
    ll x=0,f=1; char ch=getchar();
    while(ch<'0'||ch>'9') {if(ch=='-') f=-1; ch=getchar();}
    while(ch>='0'&&ch<='9') {x=(x<<3)+(x<<1)+(ch^48); ch=getchar();}
    return x*f;
}

ll dp[20][59050][40];
int tot;
int three[20];
int x[20];

inline void init(){
    three[0]=1;
    for(int i=1;i<=19;++i) three[i]=three[i-1]*3;
}

void dfs(int pos,int val,int lim){
    if(pos<0) return (void) (++dp[0][val][lim]);
    if(x[pos]==0) dfs(pos-1,val,lim+1);
    if(x[pos]==1) {
        if(lim>=1) dfs(pos-1,val+2*three[pos],lim-1);
        dfs(pos-1,val,lim+1);
    }
    if(x[pos]==2){
        if(lim>=1) dfs(pos-1,val,lim-1);
        dfs(pos-1,val+2*three[pos],lim+1);
    }
}

ll dfs(int pos,int state,int lim,bool top){
    if(pos<0) return dp[0][state][lim];
    if(!top && dp[pos][state][lim]!=-1) return dp[pos][state][lim];
    ll res=0; int up=top?x[pos]:2;
    for(int i=0;i<=up;++i) res+=dfs(pos-1,state+(i==1?-1:(i==2?1:0))*three[pos],lim+(i==1?1:(i==2?-1:0)),top&&i==up);
    if(!top) dp[pos][state][lim]=res;
    return res;
}

inline void work(ll x){
    memset(dp,-1,sizeof dp);
    tot=-1;
    while(x) {
        ::x[++tot]=x%3;
        x/=3;
    }
    dfs(tot,0,0);
    printf("%lld\n",dfs(tot,0,0,1));
}

int main(){
    init();
    int T=read();
    while(T--) work(readll());
    return 0;
}
