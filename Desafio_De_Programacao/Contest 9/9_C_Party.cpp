#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> relacao
vector<bool> visitado;
queue<int> chefes;
int maior;

void DFS(int atual, int cargo){
	visitado[atual] = true;
	cargo+=1;
	if(cargo>maior){
		maior = cargo;
	}
	for(int i=0;i<relacao[atual].size();i++){
		if(!visitado[relacao[atual]]){
			DFS(visitado[relacao[atual]],cargo);
		}
	}
}




int main(){
	maior = 0;
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		vector<int> vazio;
		relacao.push_back(vazio);
	}

	for (int i = 0; i < n; ++i)
	{
		int n;
		if(n>-1){
			relacao[n].push_back(i);
		}else{
			queue.push_back(i);
		}
	}
	while(!queue.empty()){
		DFS(queue.first(),0);
		queue.pop();
	}

	cout << maior;

}