#include <bits/stdc++.h>
using namespace std;
 
vector<int> lista,outraLista;
 
int main(){
	int t;
	cin >> t;
 
	for (int l = 0; l < t; ++l)
	{
		int n,m;
		lista.clear();
		outraLista.clear();
		cin >> n>>m;
		for (int i = 0; i < n; ++i)
		{
			int val;
			cin>>val;
			lista.push_back(val);
		}
		long long int total=0,menor=0;
		sort(lista.begin(),lista.end());
		for (int i = 1; i <= m; ++i)
		{
			int val;
			cin>>val;
			outraLista.push_back(val);
		}
		sort(outraLista.begin(),outraLista.end());
		int cont=0;
		while(outraLista[cont]==1){
		    total+=2*lista[n-1-cont];
		    cont+=1;
		    if(cont==m){
		        break;
		    }
		}
		for (int i = 1; i <= m; ++i)
		{
		    int val=outraLista[m-i];
		    if(val!=1){
    			total+=lista[n-i-cont];
    			total+=lista[menor];
    			menor+=val-1;
			}
		    
		}
		cout << total<<endl;
	}
}