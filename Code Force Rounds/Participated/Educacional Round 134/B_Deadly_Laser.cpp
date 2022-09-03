#include <bits/stdc++.h>
using namespace std;
 
 
 
int main(){
	int t;
	cin>>t;
	for (int k = 0; k < t; ++k)
	{
		int n,m,x,y,d;
		cin>>n>>m>>x>>y>>d;
		if((y-d<2&&x-d<2)||(x+d>n-1&&y+d>m-1)||(x+d>n-1&&x-d<2)||(y+d>m-1&&y-d<2)){
			cout<<-1<<endl;
		}else{
			cout<<n+m-2<<endl;
		}
	}
 
}