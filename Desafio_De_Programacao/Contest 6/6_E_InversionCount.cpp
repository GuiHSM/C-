#include <bits/stdc++.h>

using namespace std;

int main (){
    int n;
    cin >> n;
    for(int i=0; i<n;i++){
        int t,total=0;
        cin >> t;
        vector<int> lista;
        for(int j=0; j<t;j++){
            int valor;
            cin >> valor;
            for(int x=0;x<lista.size();x++){
                if(lista[x]> valor){
                    total+=1;
                }
            }
            lista.push_back(valor);
        }
        cout << total;
    }
    
    
    
}