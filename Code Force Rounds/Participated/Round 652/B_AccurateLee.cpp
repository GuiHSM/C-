#include <bits/stdc++.h>
using namespace std;

vector<int> lista;

int main(){
	int t;
	cin >> t;
	string zero="0";
	for (int l = 0; l < t; ++l)
	{
		int n;
		cin >> n;
		string res;
		cin >> res;
		int iniF=-1,fimF=-1;
		bool um;
		if(res[0]-zero[0]==1){
			um=true;
			iniF=0;
		}else{
			um=false;
		}
		for (int i = 1; i < n; ++i)
		{
			if(um){
				if(res[i]==zero[0]){
					fimF=i;
				}
			}else{
				if(res[i]-zero[0]==1){
					um=true;
					iniF=i;
				}
			}
		}
		for (int i = 0; i < n; ++i)
		{
		    if(i==iniF&&i<=fimF){
			    cout<<"0";
			}else if(!(i>iniF&&i<=fimF)){
				cout << res[i];
			}
		}
		cout << endl;
	}
}
