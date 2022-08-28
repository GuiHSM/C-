#include <bits/stdc++.h>
using namespace std;
 
 
 
int main(){
	int t;
	scanf("%d",&t);
	string par="(";
	for (int l = 0; l < t; ++l)
	{
		string s;
		int n;
		scanf("%d",&n);
		cin >> s;
		int aberto=0,ahMudar=0;
		for (int i = 0; i < n; ++i)
		{
			if(s[i]==par[0]){
				aberto+=1;
			}else{
				if(aberto==0){
					ahMudar+=1;
				}else{
					aberto-=1;
				}
			}
		}
		printf("%d\n",ahMudar);
	}
}