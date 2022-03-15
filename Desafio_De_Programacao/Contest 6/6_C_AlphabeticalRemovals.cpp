#include <bits/stdc++.h>

using namespace std;

int numD3(int n){
    int cont=3;
    while (n%cont==0){
        cont*=3;
    }
    return cont-1;
}
int numD2(int n){
    int cont=2;
    while (n%cont==0){
        cont*=2;
    }
    return cont-1;
}
vector<int> insere(int valor,vector<int> lista){
    
    cout <<endl<< "insere 1" <<endl;
    int ini = 0, fim = lista.size()-1,meio=0;
    while(ini< fim){
        meio = (fim+ini)/2;
        if(numD3(lista[meio])>numD3(valor)){
            fim = meio;
        }else if(numD3(lista[meio])<numD3(valor)){
            ini = meio+1;
        }else{
            if(numD2(lista[meio])<numD2(valor)){
                ini = meio+1;
            }else{
                fim = meio;
            }
        }
    }
    cout <<endl<< "insere 2" <<endl;
    cout <<endl << ini << endl;
    lista.insert(lista.begin()+ini,valor);
}
vector<int> ordenar(int n){
    vector<int> lista;
    
    cout <<endl<< "ordenar 1" <<endl;
    for(int i=0;i<n;i++){
        int valor;
        cin>>valor;
        lista=insere(valor,lista);
    }
    
    cout <<endl<< "ordenar 2" <<endl;
    return lista;
}

int main(){
    int n;
    cin >> n;
    cout <<endl<< "main 1" <<endl;
    vector<int> lista = ordenar(n);
    for (int i = 0; i < n-1; ++i)
    {
        cout << lista[i] << " ";
    }
    
    cout <<endl<< "main 2" <<endl;
    cout << lista[n-1];
}