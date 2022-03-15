#include <bits/stdc++.h>

using namespace std;

int numD3(long long int n){
	int cont=3,valorR=0;
	while (n%cont==0){
		cont*=3;
		valorR+=1;
	}
	return valorR-1;
}
int numD2(long long int n){
	int cont=2,valorR=0;
	while (n%cont==0){
		cont*=2;
		valorR+=1;
	}
	return valorR-1;
}
vector<long long int> insere(long long int valor,vector<long long int> lista){
    
	int ini = 0, fim = lista.size(),meio=0;
	while(ini< fim){
		meio = (fim+ini)/2;
		if(numD3(lista[meio])>numD3(valor)){
			ini = meio+1;
		}else if(numD3(lista[meio])<numD3(valor)){
			fim = meio;
		}else{
			if(numD2(lista[meio])<numD2(valor)){
				ini = meio+1;
			}else{
				fim = meio;
			}
		}
	}
	lista.insert(lista.begin()+ini,valor);
	return lista;
}
vector<long long int> ordenar(int n){
	vector<long long int> lista;
	
	for(int i=0;i<n;i++){
		long long int valor;
		cin>>valor;
		lista=insere(valor,lista);
	}
	
	return lista;
}

int main(){
	int n;
	cin >> n;
	vector<long long int> lista = ordenar(n);
	for (int i = 0; i < n-1; ++i)
	{
		cout << lista[i] << " ";
	}
	
	cout << lista[n-1];
}