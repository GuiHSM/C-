#include <bits/stdc++.h>
using namespace std;

vector<string> lista;

int main(){
	int t;
	cin >> t;
	string nove="9",oito="8";
	for (int k = 0; k < t; ++k)
	{
		lista.clear();
		for (int l = 0; l < 9; ++l)
		{
			string valor;
			cin >> valor;
			lista.push_back(valor);
		}
		if(lista[0][0]==nove[0]){
			lista[0][0]=oito[0];
		}else{
			lista[0][0]=nove[0];
		}
		if(lista[3][1]==nove[0]){
			lista[3][1]=oito[0];
		}else{
			lista[3][1]=nove[0];
		}
		if(lista[6][2]==nove[0]){
			lista[6][2]=oito[0];
		}else{
			lista[6][2]=nove[0];
		}
		if(lista[1][3]==nove[0]){
			lista[1][3]=oito[0];
		}else{
			lista[1][3]=nove[0];
		}
		if(lista[4][4]==nove[0]){
			lista[4][4]=oito[0];
		}else{
			lista[4][4]=nove[0];
		}
		if(lista[7][5]==nove[0]){
			lista[7][5]=oito[0];
		}else{
			lista[7][5]=nove[0];
		}
		if(lista[2][6]==nove[0]){
			lista[2][6]=oito[0];
		}else{
			lista[2][6]=nove[0];
		}
		if(lista[5][7]==nove[0]){
			lista[5][7]=oito[0];
		}else{
			lista[5][7]=nove[0];
		}
		if(lista[8][8]==nove[0]){
			lista[8][8]=oito[0];
		}else{
			lista[8][8]=nove[0];
		}
		for (int i = 0; i < 9; ++i)
		{
			cout << lista[i] << endl;
		}
	}
}