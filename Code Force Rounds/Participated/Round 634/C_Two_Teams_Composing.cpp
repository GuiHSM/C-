#include <bits/stdc++.h>
using namespace std;

vector<int> valores;

int main(){
	int t;
	cin >> t;
	for (int l = 0; l < t; ++l)
	{
		valores.clear();
		int n;
		cin >> n;
		for (int i = 0; i < n+1; ++i)
		{
			valores.push_back(0);
		}
		int diferentes = 0,iguais = 1;
		for (int i = 0; i <n; ++i)
		{
			int j;
			cin >> j;
			if(valores[j]==0){
				diferentes+=1;
				valores[j]+=1;
			}else{
				valores[j]+=1;
				if(valores[j]>iguais){
					iguais=valores[j];
				}
			}
		}
		if(iguais>diferentes){
			n=diferentes;
		}else if(iguais<diferentes){
			n=iguais;
		}else{
			n=diferentes-1;
		}
		cout << n<<endl;
	}
}