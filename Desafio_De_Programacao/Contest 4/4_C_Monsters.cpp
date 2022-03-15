#include <bits/stdc++.h>
using namespace std;
int main (){
	int n, a, b, k;
	cin >> n >> a >> b >> k;
	int soma=a+b,vai=0;
	vector<int> valor;
	for (int i = 0; i < n; i++)
	{
		int monstro;
		cin >> monstro;
		int valorFinal = monstro%soma;
		if ((valorFinal-a)<1 && valorFinal!=0){
			vai+=1;
		}else{
		    if(valorFinal==0){
		        valorFinal=soma;
		    }
			int ahInserir=(valorFinal-a)/a;
			if((valorFinal-a)%a>0){
				ahInserir+=1;
			}
			valor.push_back(ahInserir);
		}
	}
	bool nAchado=true;
	int cont=0;
	soma=0;
	sort(valor.begin(),valor.begin()+valor.size());
	while (nAchado && cont < valor.size()){
		soma+=valor[cont];
		if(soma<=k){
			vai+=1;
			cont+=1;
		}else{
			nAchado=false;
		}
	}
	cout << vai;

}