#include <bits/stdc++.h>

using namespace std;




 
int main (){
    int t;
    cin >> t;
    for(int i=0; i<t;i++){
        int n,total=0;
        cin >> n;
        vector<int> lista;
        for(int j=0;j<n;j++){
            int valor;
            cin >> valor;
            lista.push_back(valor);
        }
        for(int j=0;j<n;j++){
            int maiorIndice=0,cont=0;
            bool notFound = true;
            for(int x=0;x<lista.size();x++){
                if(lista[maiorIndice]<= lista[x]){
                    maiorIndice=x;
                }
            }
            total+=lista.size()-maiorIndice-1;
            lista.erase(lista.begin()+maiorIndice);
        }cout << total;
    }
    
    
    
}