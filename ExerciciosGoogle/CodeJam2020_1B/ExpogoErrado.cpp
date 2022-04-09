#include <bits/stdc++.h>
using namespace std;

vector<int> forma1(int x){
	vector<int> listaBin;
	int copia=x;
	while(x>1){
		listaBin.push_back(copia%2);
		copia/=2;
	}
	listaBin.push_back(copia%2);
	vector<int> resposta;
	for (int i = 0; i < listaBin.size(); ++i)
	{
		if(listaBin[i]==1){
			resposta.push_back(elevar(i));
		}
	}
	return listaBin;
}

vector<int> forma2(int x){
	vector<int> listaBin;
	int copia=x;
	int maior2=1;
	while(copia>maior2){

	}
}


int main(){
	int t;
	cin >> t;
	for (int l = 0; l < t; ++l)
	{
		int x,y;
		cin >> x>>y;
		bool xN=false,yN=false;
		if(x<0){
			x*=-1;
			xN=true;
		}
		if(y<0){
			y*=-1;
			yN=true;
		}
		string resposta="";
		if(x%2==y%2){
			resposta="IMPOSSIBLE";
		}else{
			int quantosPerfeitos=qtd(x,y);
			if(quantosPerfeitos<0){

			}else(quantosPerfeitos==1){
				int taxaX=taxaPer(x),taxaY=taxaPer(y);
				bool eh=true;
				if(taxaX==-1){
					int copx= x;
					x=y;
					y=x;
					taxaX=taxaY;
					eh=false;
				}
				forma1(y);
				forma2(y);
				int cont=1;
				if(x==1){

				}else{
					bool funfa=true;
					for (int i = 0; i < um.size(); ++i)
					{
						
					}
					for (int i = 0; i < dois.size(); ++i)
					{
						/* code */
					}
				}
			}else{
				bool eh=true;
				if(y==1){
					eh=false;
					y=x;
					x=1;
				}
				int cont=1;
				while(cont*2<x){
					if(eh){
						resposta+="W";
					}else{
						resposta+="S";
					}
					cont*=2;
				}
				if(eh){
					resposta+="E";
					resposta+="N";
				}else{
					resposta+="N";
					resposta+="E";
				}

			}
		}
	}
}