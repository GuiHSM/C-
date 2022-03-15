#include <bits/stdc++.h>
using namespace std;

vector<string> reordenar(vector<string> lista, string valor){
	int ini=0, fim = lista.size(),tamanho = valor.size();
	while (ini < fim){
		int meio = (fim+ini)/2;
		int valori = lista[meio].size();
		if( valori> tamanho){
			fim = meio;
		}else{
			ini = meio+1;
		}
	}
	lista.insert(lista.begin() + ini, valor);
	return lista;
}

int main (){
	int n;
	cin >> n;
	vector<string> lista;
	for (int i = 0; i < n; ++i)
	{
		string texto;
		cin >> texto;
		lista = reordenar(lista,texto);
	}
	bool certo = true;
	for (int i = 0; i < n-1; ++i)
	{
	    int valor = lista[i+1].find(lista[i]);
		if(valor < 0){
			certo = false;
		}
	}

	if(certo){
		cout << "YES";
		for (int i = 0; i < n; ++i)
		{
			cout << endl << lista[i];
		}
	}else{
		cout << "NO";
	}


}