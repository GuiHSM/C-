#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	for (int k = 0; k < t; ++k)
	{
		int n;
		cin>>n;
		if(n%3==2){
			for (int i = 1; i <= n; ++i)
			{
				cout<<i<<" ";
			}
		}else if(n%3==1){
			cout<<"2 1 ";
			for (int i = 3; i <=n; ++i)
			{
				cout<<i<<" ";
			}
		}else{
			for (int i = 2; i <n-2; ++i)
			{
				cout<<i<<" ";
			}
			cout<<n-1<<" "<<1<<" "<<n-2<<" "<<n;
		}
		cout<<endl;
	}
}
