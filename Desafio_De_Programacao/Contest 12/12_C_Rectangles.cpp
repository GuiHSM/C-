#include <bits/stdc++.h>
using namespace std;



int main(){
	int n,m;
	cin >> n >> m;
	vector<vector<int>> matriz;
	vector<int> vazio;
	long long int total = 0;
	total-=n*m;
	int ahFatorarP,ahFatorarB;
	for(int i=0;i<n;i++){
		matriz.push_back(vazio);
		for (int j = 0; j < m; ++j)
		{
			int cor;
			cin >> cor;
			matriz[i].push_back(cor);
		}
	}

	for(int i=0;i<n;i++){
		ahFatorarB = 0; ahFatorarP=0;
		for (int j = 0; j < m; ++j)
		{
			if(matriz[i][j]==0){
				ahFatorarP+=1;
			}else{
				ahFatorarB+=1;
			}
		}
		long long int dois=1;
		for(int j=0;j<ahFatorarB;j++){
		    dois*=2;
		}
		total+=dois-1;
		dois=1;
		for(int j=0;j<ahFatorarP;j++){
		    dois*=2;
		}
		total+=dois-1;
	}
	for(int i=0;i<m;i++){
		ahFatorarB = 0; ahFatorarP=0;
		for (int j = 0; j < n; ++j)
		{
			if(matriz[j][i]==0){
				ahFatorarP+=1;
			}else{
				ahFatorarB+=1;
			}
		}
		long long int dois=1;
		for(int j=0;j<ahFatorarB;j++){
		    dois*=2;
		}
		total+=dois-1;
		dois=1;
		for(int j=0;j<ahFatorarP;j++){
		    dois*=2;
		}
		total+=dois-1;
	}
	cout << total;
}
