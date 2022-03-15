#include <bits/stdc++.h>

using namespace std;
void printar(vector<int> lista){
	for (int i = 0; i < lista.size()-1; ++i)
	{
		cout << lsita[i] << " ";
	}
	cout << lista[lista.size()-1];
}

void testar(vector<int> lista, int valor){
	bool achado=true;
	while (cont <lista.size && achado){
		if(lista[cont] == valor){
			achado = false;
		}
		cont+=1;
	}
	return achado;
}

int main (){
	int k,n;
	cin >> n >> k;
	for (int i = 0; i < n; ++i)
	{
		int valor;
		cin >> valor;
		if(lista.size()<k){
			if (testar(lista,valor))
			{
				lista.push_back(valor);
			}
		}
	}
	if(lista.size()==k){
		cout << "YES" << endl;
		printar(lista);
	}else{
		cout << "NO";
	}

}