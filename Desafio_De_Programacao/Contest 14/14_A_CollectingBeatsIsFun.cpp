#include <bits/stdc++.h>
using namespace std;

int main(){
	string zero="0.";
	vector<int> valor;
	for (int i = 0; i < 10; ++i)
	{
		valor.push_back(0);
	}
	int k;
	cin >> k;
	for (int i = 0; i < 4; ++i)
	{
		string linha;
		for (int j = 0; j < 4; ++j)
		{
			if(linbha[i]!=zero[1]){
				valor[linha[i]-zero[0]]+=1;
			}
		}
	}
	bool deu=true;
	for (int i = 1; i < 10; ++i)
	{
		if(lista[i]>k*2){
			deu=false;
		}
	}
	if(deu){
		cout << "YES";
	}else{
		cout << "NO";
	}



}

