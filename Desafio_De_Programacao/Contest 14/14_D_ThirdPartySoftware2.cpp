#include <bits/stdc++.h>
using namespace std;

vector<int>comeco,lista;
map<int,int> val,indice;

int procura(int n){
	int ini=0,fim=comeco.size()-1;
	while(ini<fim){
		int meio=(ini+fim)/2;
		if(comeco[meio]>n){
			fim=meio;
		}else if(comeco[meio]<n){
			ini=meio+1;
		}else{
			fim=meio;
			ini=meio;
		}
	}
	if(comeco[fim]>n){
	    fim-=1;
	}
	return fim;
}

int achar(int fim,int ini){
	int valIni=procura(ini+1);
	int valFim = procura(fim);
	int max=fim,indi=-1;
	for (int i = valIni; i <=valFim; ++i)
	{
		if(max<=val[comeco[i]]){
			max=val[comeco[i]];
			indi=comeco[i];
		}
	}
	return indi;
}

int main(){
	int n,m;
	cin >> n >> m;
	for (int i = 1; i <= n; ++i)
	{
		int a,b;
		cin >> a >> b;
		if(val[a]==0){
			comeco.push_back(a);
		}
		if(val[a]<b){
			val[a]=b;
			indice[a]=i;
		}
	}
	int atual=1,anterior=0;
	sort(comeco.begin(),comeco.begin()+comeco.size());
	bool falha=false,continua=true;
	while(continua){
		int proximo=achar(atual,anterior);
		if(proximo<1){
			falha=true;
			continua=false;
		}
		lista.push_back(indice[proximo]);
		if(val[proximo]==m){
			continua=false;
		}
		anterior=atual;
		atual=val[proximo]+1;
	}

	if(falha){
        cout << "NO"; 
	}else{
	    cout << "YES" << endl; 
		cout << lista.size()<<endl;
		for (int i = 0; i < lista.size(); ++i)
		{
			cout<< lista[i] << " ";
		}
	}
	
}