#include <bits/stdc++.h>
using namespace std;

int n;
vector<bool> crivo;
vector<int> lista;

void marcar(int a){
	for (int i = a+1; i <= n; ++i)
	{
		if(i%a==0){
			crivo[i] = false;
		}
	}
}

void somarQ(int a){
	int soma = a;
	while(a*soma <= n){
	    soma*=a;
		lista.push_back(soma);
		
	}
}

int main(){
	cin >> n;
	
	for(int i=0; i<=n;i++){
		crivo.push_back(true);
	}
	for (int i = 2; i <= n; ++i)
	{
		if(crivo[i]==true){
			lista.push_back(i);
			marcar(i);
			somarQ(i);
		}
	}
	cout << lista.size() << endl;
	if(n==1){
	    
	}else{
    	for (int i = 0; i < lista.size()-1; ++i)
    	{
    		cout << lista[i] << " ";
    	}if(lista.size()>0){
    	    cout << lista[lista.size()-1];
    	}
	}
}
