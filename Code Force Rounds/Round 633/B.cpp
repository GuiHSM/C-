#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	string alfabeto="abcdefghijklmnopqrstuvwxyz";
	cin >> t;
	for (int l = 0; l < t; ++l)
	{
		int n,a,b;
		cin >> n >> a >> b;
		int copA=a,copB=b,dif=a-b,x=0;
		for (int i = 0; i < n; ++i)
		{	

			if(copB>0){
				x+=1;
				dif=a-b
			}else{
				dif-=1;
				x=0;
				if(dif==0){
					copB=b;
				}
			}
			cout << alfabeto[x];
		}
		cout << endl;
	}
}