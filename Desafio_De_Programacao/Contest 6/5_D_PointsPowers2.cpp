#include <bits/stdc++.h>

using namespace std;

bool ehIntegralmenteDois(int valor1, int valor2){
	int valor = valor1-valor2;
	if(valor<0){
		valor *=-1;
	}
	bool eh = true;
	while(eh && valor>1){		
		if(valor%2==1){
			eh = false;
		}
		valor/=2;
	}
	return eh;
}

int main (){

}