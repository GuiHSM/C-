#include <bits/stdc++.h>
using namespace std;


int main(){
	int t;
	cin>>t;
	for (int h = 0; h < t; ++h)
	{
		int n,k,r,c;
		cin>>n>>k>>r>>c;
		for (int i = 1; i < n+1; ++i)
		{
			for (int j = 1; j < n+1; ++j)
			{
				if((i-r+j-c)%k==0){
					cout<<"X";
				}else{
					cout<<".";
				}
			}
			cout<<endl;
		}
	}
}