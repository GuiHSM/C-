#include <bits/stdc++.h>
using namespace std;
int intersecao (vector<vector<int>> valores,int n){
	int menorp1=0, maiorp0=1,indicep1=0,indicep0=0;
	if(n-1>0){
		menorp1=valores[0][1];
		maiorp0=valores[0][0];
	}
	for (int i = 1; i < n-1; ++i)
	{
		if(valores[i][0]>maiorp0){
			maiorp0 = valores[i][0];
		}
		if(valores[i][1]<menorp1){
			menorp1 = valores[i][1];
		}
	}
	if(maiorp0>menorp1){
		return 0;
	}
	int d=menorp1 - maiorp0;
	return d;

}


int main(){
	int n;
	vector<vector<int>> valores(n);
	cin >> n;
	int x,y;
	cin >> x >> y;
	int d =y-x;
	valores[0].push_back(x);
	valores[0].push_back(y);
	valores[0].push_back(d);
	int maiorp1=0,menorp1=0,maiorp0=0,menorp0=0,menorD=0,segMenorD=0;
	for (int i = 1; i < n; ++i)
	{
		cin >> x >> y;
		d =y-x;
    	valores[i].push_back(x);
    	valores[i].push_back(y);
    	valores[i].push_back(d);
    
		if(valores[maiorp1][1]<y){
			maiorp1 =i;
		}else if(valores[maiorp1][1]==y){
			if(d<valores[maiorp1][2]){
				maiorp1 = i;
			}
		}

		if(valores[menorp1][1]>y){
			menorp1 =i;
		}else if(valores[menorp1][1]==y){
			if(d<valores[menorp1][2]){
				menorp1 = i;
			}
		}

		if(valores[maiorp0][0]<x){
			maiorp0 =i;
		}else if(valores[maiorp0][0]==x){
			if(d<valores[maiorp0][2]){
				maiorp0 = i;
			}
		}

		if(valores[menorp0][0]>x){
			menorp0 =i;
		}else if(valores[menorp0][0]==x){
			if(d<valores[menorp0][2]){
				menorp0 = i;
			}
		}

		if(valores[menorD][2]>d){
			
			segMenorD = menorD;
			menorD =i;
		}else if(valores[segMenorD][2]>d){
			segMenorD = i;
		}
	}
	int total=0;
	if(!(total == valores[segMenorD][2])){
		vector<vector<int>> tentativa= valores;
		tentativa.erase(tentativa.begin()+menorD);
		int valor = intersecao(tentativa,n);
		cout << total << " Entrei"<< endl;
		if(valor > total){
			total=valor;
		}
	}

	cout << total << " " << menorD<< endl;
	if(!(total == valores[segMenorD][2])){
		vector<vector<int>> tentativa = valores;
		tentativa.erase(tentativa.begin()+maiorp0);
		int valor = intersecao(tentativa,n);
		cout << total << " Entrei"<< endl;
		if(valor > total){
			total=valor;
		}
	}
	cout << total << " " << maiorp0<< endl;

	if(!(total == valores[segMenorD][2])){
		vector<vector<int>> tentativa = valores;
		tentativa.erase(tentativa.begin()+maiorp1);
		int valor = intersecao(tentativa,n);
		cout << total << " Entrei"<< endl;
		if(valor > total){
			total=valor;
		}
	}
	cout << total << " " << maiorp1<< endl;

	if(!(total == valores[segMenorD][2])){
		vector<vector<int>> tentativa = valores;
		tentativa.erase(tentativa.begin()+menorp0);
		int valor = intersecao(tentativa,n);
		cout << total << " Entrei"<< endl;
		if(valor > total){
			total=valor;
		}
	}
    
	cout << total << " " << menorp0<< endl;
	if(!(total == valores[segMenorD][2])){
		vector<vector<int>> tentativa = valores;
		tentativa.erase(tentativa.begin()+menorp1);
		int valor = intersecao(tentativa,n);
		cout << total << " Entrei"<< endl;
		if(valor > total){
			total=valor;
		}
	}
	cout << total << " " << menorp1<< endl;
	if(!(total == valores[segMenorD][2])){
		vector<vector<int>> tentativa = valores;
		tentativa.erase(tentativa.begin()+segMenorD);
		int valor = intersecao(tentativa,n);
		cout << total << " Entrei"<< endl;
		if(valor > total){
			total=valor;
		}
	}
	cout << total << " " << segMenorD<< endl;

	cout << total;


}





