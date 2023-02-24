#include <bits/stdc++.h>
using namespace std;
int _tmp[101],__t;
#define rpt(n) for(_tmp[__t]=1;_tmp[__t]<=n;++_tmp[__t])
int main() {
	rpt(3){
		++__t;
		rpt(2){
			cout<<1<<endl;
			cout<<"内部tmp"<<__t<<endl;
			
		}
		--__t;
		cout<<"外部tmp"<<__t<<endl;
	}
	
	return 0;
}