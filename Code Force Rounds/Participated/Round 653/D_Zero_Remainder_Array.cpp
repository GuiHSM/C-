#include <bits/stdc++.h>
using namespace std;

map<int,int> qtd;

int main(){
	int t;
	scanf("%d",&t);
	for (int l = 0; l < t; ++l)
	{
		int n,k,qtdTotal=1,resposta=-1;
		qtd.clear();
		scanf("%d%d",&n,&k);
		for (int i = 0; i < n; ++i)
		{
			int val;
			scanf("%d",&val);
			int ahMudar=k-val%k;
			if(ahMudar!=k){
    			qtd[ahMudar]+=1;
    			if(qtd[ahMudar]>qtdTotal||(qtd[ahMudar]==qtdTotal&&ahMudar>resposta)){
    				qtdTotal=qtd[ahMudar];
    				resposta=ahMudar;
    			}
			}
		}
		long long int isso=k,a=qtdTotal-1;
		isso*=a;
		a=resposta;
		isso+=resposta;
		isso+=1;
		cout << isso<<endl;
	}
}