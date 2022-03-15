#include <bits/stdc++.h>
using namespace std;


int main(){
	map<int,int> h,s;
	int n,m;
	cin >> n >> m;
	string vazio,val="SHM";
	bool continua=true;
	for (int i = 0; i < m; ++i)
	{
		int a;
		cin >> a;
		cin >> vazio;
		if(continua){
			if(vazio[0]==val[0]){
				s[a]=1;
				for (int i = -3; i < 4; ++i)
				{
					if(h[a-i]>0){
						continua=false;
					}
				}
			}else if(vazio[0]==val[1]){
				h[a]=1;
				for (int i = -3; i < 4; ++i)
				{
					if(s[a-i]>0){
						continua=false;
					}
				}
			}else{
				continua = false;
			}
		}
	}
	if(continua){
		cout << "Yes";
	}else{
		cout << "No";
	}

}