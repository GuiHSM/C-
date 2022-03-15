#include <bits/stdc++.h>
using namespace std;
int main (){
	int n,k,menosK;
	cin >> n,k;
	vector<int> indice,valor;
	for(int i=0;i<n;i++){
		int cara;
		cin >> cara;
		int cont=0;
		bool nAchado=true;
		while (cont<valor.size() && nAchado && menosK<K){
			if(valor[cont]==cara){
				nAchado=false;
			}else{
				cont +=1;
			}
		} 
		if (nAchado == false && menosK<k){
			menosK+=1;
			valor.push_back(cara);
			indice.push_back(i);
		}
	}
	if(menosK==k){
		cout << "YES" << endl;
		for (int i=0; i < valor.size()-1;i++){
			cout << valor[i] << " ";
		}
		cout << valor[valor.size()-1];
	}else{
		cout << "NO";
	}



}