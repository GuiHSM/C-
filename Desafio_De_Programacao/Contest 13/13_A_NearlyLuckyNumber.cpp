#include <bits/stdc++.h>
using namespace std;

int qtd(long long int val){
	int cont=0;
	long long int total=0,dez=1;
	while(val/dez>=1){
		dez*=10;
		long long int parte1=(val/(dez))*dez;
		long long int ahTestar=(val-parte1)/(dez/10);
		if(ahTestar==7 ||ahTestar==4){
			cont+=1;
		}
		val-=ahTestar;
	}
	return cont;
}

bool isLucky(int val){
	int dez=1,total=0;
	bool eh=true;
	while(val/dez>=1&&eh){
		int ahTestar = val-total-(val/(dez*10));
		if(!(ahTestar==7 ||ahTestar==4)){
			eh=false;
		}
		total+=ahTestar;
		dez*=10;
	}
	return eh;
}
int main(){
	long long int val;
	cin >> val;
	int dig = qtd(val);
	bool resposta = isLucky(dig);
	if (resposta&&dig>0)
	{
		cout << "YES";
	}else{
		cout << "NO";
	}
}