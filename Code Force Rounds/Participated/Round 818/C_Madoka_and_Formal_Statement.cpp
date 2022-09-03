#include <bits/stdc++.h>
using namespace std;

vector<int> as,bs;
int main(){
	int t;
	cin>>t;
	for (int k = 0; k < t; ++k)
	{
		bs.clear();
		as.clear();
		int n;
		cin>>n;
		bool yes=true;
		for (int i = 0; i < n; ++i)
		{
			int a;
			cin>>a;
			as.push_back(a);
		}
		for (int i = 0; i < n; ++i)
		{
			int b;
			cin>>b;
			if(b<as[i]){
				yes=false;
			}
			bs.push_back(b);
		}
		for (int i = 0; i < n-1; ++i)
		{
			if((bs[i]-bs[i+1]>1)&&(as[i]!=bs[i])){
				yes=false;
			}
		}
		if((bs[n-1]-bs[0]>1)&&(as[n-1]!=bs[n-1])){
				yes=false;
			}
		if(yes){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}
}
