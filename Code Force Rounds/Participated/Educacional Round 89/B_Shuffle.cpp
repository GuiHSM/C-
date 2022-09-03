#include <bits/stdc++.h>
using namespace std;

vector<int> lista, fim;

int main(){
	int t;
	cin >> t;
	for (int l = 0; l < t; ++l)
	{
		int n,x,m;
		int esq=0,dir=0;
		cin >> n>>x>>m;
		lista.clear();
		fim.clear();
		for (int i = 0; i < m; ++i)
		{
			int l,r;
			cin >> l >> r;
			if(x-esq<=r&&x-esq>l){
				esq=x-l;
			}
			if(x+dir<r&&x+dir>=l){
				dir=r-x;
			}
		}
		cout << esq+dir+1<<endl;
	}
}