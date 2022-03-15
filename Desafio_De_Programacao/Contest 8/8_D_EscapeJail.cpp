#include <bits/stdc++.h>
using namespace std;

vector<int> key;
vector<bool> trancado,visitado;
vector<vector<int>> mapa;
map<int,int> ahVisitar;



void DFS(int atual,){
	visitado[atual] = true;
	if(key[atual]>0){
		trancado[key[atual]]=false;
		if(ahVisitar[key[atual]]>0){
			DFS(ahVisitar[key[atual]]);
		}
	}
	for (int i = 0; i < mapa[atual].size(); ++i)
	{
		if(!visitado[mapa[atual][i]] && !trancado[mapa[atual][i]]){
			DFS(mapa[atual][i]);
		}else if(trancado[mapa[atual][i]]){
			ahVisitar[mapa[atual][i]]=mapa[atual][i];
		}
	}
}



int main(){
	int n,k,m;
	cin >> n >> k >> m;

	while(n>-1 && k>-1 && m>-1){
		mapa.clear();
		key.clear();
		trancado.clear();
		visitado.clear();
		ahVisitar.clear();
		vector<int> vazio;
		for(int i=0;i<=n;i++){
			key.push_back(0);
			mapa.push_back(vazio);
			visitado.push_back(false);
			trancado.push_back(false);
		}
		for (int i = 0; i < k; ++i)
		{
			int a,b;
			cin >> a >> b;
			key[a] = b;
			trancado[b] = true;
		}
		for (int i = 0; i < m; ++i)
		{
			int a,b;
			cin >> a >> b;
			mapa[a].push_back(b);
			mapa[b].push_back(a);
		}
		DFS(1);
		if(visitado[n]){
			cout << "Y";
		}else{
			cout << "N";
		}cout << endl;
		cin >> n >> k >> m;
	}
}