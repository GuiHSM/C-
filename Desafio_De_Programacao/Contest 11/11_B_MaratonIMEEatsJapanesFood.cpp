#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> valor;
map<pair<int,int>,int> mapa;


int main(){
	int q;
	string op="RA";
	cin >> q;
	vector<int> vazio;
	vazio.push_back(-1);
	vazio.push_back(-1);
	vazio.push_back(-1);
	for (int i = 0; i < q; ++i)
	{
		int x,y,r;
		string val;
		cin >> val >> x >> y >> r;
		if(val[0]==op[0]){
			pair<int,int> par = make_pair(x,y);
			int indice = mapa[par];
			if(indice==0){
				cout << "No";
			}else{
			    if(valor[indice-1][2]==r){
    				cout << "Ok";
    				mapa.erase(par);
    				valor[indice-1] = vazio;
			    }else{
			        cout << "No";
			    }
			}
		}else{
			int j=0;
			bool eh=true;
			while(j<valor.size()&&eh){
				if(valor[j][0]>=0){
					if((valor[j][2]+r)*(valor[j][2]+r)>(x-valor[j][0])*(x-valor[j][0])+(y-valor[j][1])*(y-valor[j][1])){
						eh=false;
					}
				}
				j+=1;
			}
			if(eh){
				cout << "Ok";
				vector<int> novo;
				novo.push_back(x);
				novo.push_back(y);
				novo.push_back(r);
				pair<int,int> par = make_pair(x,y);
				mapa[par] = valor.size()+1;
				valor.push_back(novo);
			}else{
				cout << "No";
			}
		}
		cout << endl;
	}
	


}