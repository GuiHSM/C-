#include <bits/stdc++.h>
using namespace std;

int main(){
	int t,a,b;
	cin >> t>> a >> b;
	vector<int> x,y;
	x.push_back(-1);
	x.push_back(0);
	x.push_back(1);
	x.push_back(1);
	x.push_back(0);
	x.push_back(0);
	x.push_back(-1);
	x.push_back(-1);
	x.push_back(0);
	y.push_back(0);
	y.push_back(1);
	y.push_back(0);
	y.push_back(0);
	y.push_back(-1);
	y.push_back(-1);
	y.push_back(0);
	y.push_back(0);
	y.push_back(1);
	string retorno="";
	for (int l = 0; l < count; ++l)
	{
		int achado=0,cont=1,atual=0;
		int ahTestarX=0 ;ahTestarY=0;
		cout << ahTestarX << " " << ahTestarY << endl << flush;
		
		cin >> retorno
		achado=ler(retorno);
		while(achado<1){
			ahTestarY+=y[atual]*a;
			ahTestarX+=x[atual]*a;
			repetir+=1;
			if(repetir==aHrepetir){
				repetir=0;
				atual+=1;
			}
			if(atual==8){
				aHrepetir+=1;
				atual=0;
			}
			cout << ahTestarX << " " << ahTestarY << endl << flush;
			cin >> retorno
			achado=ler(retorno);
		}
		while(achado==1){
			
		}
	}

}