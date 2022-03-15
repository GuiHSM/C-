#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> adj;
vector<int> qtdP;
vector<bool> nColocado;
string alfabeto,resposta;

void dfs(int indice){
	resposta+=alfabeto[indice];
	nColocado[indice]=false;
	for (int i = 0; i < qtdP[indice]; ++i)
	{
		if(nColocado[adj[indice][i]]){
			dfs(adj[indice][i]);
		}
	}
}




int main(){
	alfabeto = "abcdefghijklmnopqrstuvwxyz";
	string texto;
	vector<int> vazio;
	int t;
	cin >> t;
	for(int l=0;l<t;l++){
		int n;
		adj.clear();
		qtdP.clear();
		nColocado.clear();
		resposta="";
		for (int i = 0; i < 26; ++i)
		{
			adj.push_back(vazio);
			qtdP.push_back(0);
			nColocado.push_back(true);
		}
		cin >> texto;
		n=texto.size();
		bool continua=true;
		int anterior=texto[0]-alfabeto[0];
		for (int i = 1; i < n; ++i)
		{
			int atual = texto[i]-alfabeto[0];
			bool novo=true;
			if(qtdP[atual]==1){
				if(adj[atual][0]==anterior){
					novo=false;
				}
			}else if(qtdP[atual]==2){
				if(adj[atual][0]==anterior){
					novo=false;
				}else if(adj[atual][1]==anterior){
					novo=false;
				}else{
					continua=false;
				}
			}
			if(novo){
				qtdP[atual]+=1;
				adj[atual].push_back(anterior);
				if(qtdP[anterior]==2){
					continua=false;
				}
				qtdP[anterior]+=1;
				adj[anterior].push_back(atual);
			}
			anterior=atual;
		}
		if(continua){
			for (int i = 0; i < 26; ++i)
			{
				if((qtdP[i]<2)&&nColocado[i]){
					dfs(i);
				}
			}
			if(resposta.size()<26){
				cout << "NO"<<endl;
			}else{
				cout << "YES"<<endl<<resposta<<endl;
			}
		}else{
			cout << "NO"<<endl;
		}

	}
}
