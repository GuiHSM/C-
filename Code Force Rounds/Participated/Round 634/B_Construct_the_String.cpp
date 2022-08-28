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
		int copA=a,copB=b,dif=a-b,x=-1;
		for (int i = 0; i < n; ++i)
		{	
		    
			if(copB>0){
				x+=1;
				dif=a-b;
				copB-=1;
			}else if(dif>0){
				dif-=1;
				x=0;
			}else if(dif==0){
				copB=b-1;
				x=0;
			}
			cout << alfabeto[x];
		}
		cout << endl;
	}
}