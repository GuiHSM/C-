#include <bits/stdc++.h>
using namespace std;



int main(){
	int t;
	cin>>t;
	vector<int> ai,bi,maxi,mini;
	for (int k = 0; k < t; ++k)
	{
		int n;
		cin>>n;
		ai.clear();
		maxi.clear();
		mini.clear();
		for (int i = 0; i < n; ++i)
		{
			int val;
			cin>> val;
			ai.push_back(val);
			maxi.push_back(0);
			mini.push_back(0);
		}
		bi.clear();
		int cont=0;
		for (int i = 0; i < n; ++i)
		{
			int val;
			cin>> val;
			bi.push_back(val);
			while(cont<n&&ai[cont]<=val){
				mini[cont]=i;
				cont+=1;
			}
		}
		int amixi=1, amax=n-1;
		for (int i = n-1; i >-1; --i)
		{
			maxi[i]=amax;
			if(i==mini[i]){
				amax=i-1;
			}
		}
		for (int i = 0; i < n; ++i)
		{
			cout<<bi[mini[i]]-ai[i]<<" ";
		}
		cout<<endl;
		for (int i = 0; i < n; ++i)
		{
			cout<<bi[maxi[i]]-ai[i]<<" ";
		}
		cout<<endl;
	}
}