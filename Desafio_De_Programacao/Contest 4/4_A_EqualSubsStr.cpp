#include <bits/stdc++.h>

using namespace std;

int main (){
	int n,k,contador=0,iguais=0,combo=0;
	cin >> n >> k;
	string texto;
	cin >> texto;
	int testar=n-1;
	bool nTerminado = contador<testar;
	while (nTerminado){
		if(texto[testar-combo]==texto[contador-combo]){
			combo+=1;
			if((contador-combo+1)==0){
				iguais=combo;
				combo=0;
				contador+=1;
			}
		}else{
			combo=0;
			contador+=1;
		}
		if(contador>=testar){
		    nTerminado=false;
		}
	}
	string sub=texto.substr(iguais,n-iguais),final=texto;
	for(int i=0;i<k-1;i++){
	    final=final+sub;
	}
	cout <<final;

}