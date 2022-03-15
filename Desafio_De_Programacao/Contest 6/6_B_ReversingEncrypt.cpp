#include <bits/stdc++.h>

using namespace std;

int main (){
       int n;
    cin >> n;
    string texto;
    cin >> texto;
    vector<int> lista;
if(n==1){
cout << texto;
}else{
    for(int i=2;i<n+1;i++){
        if(n%i==0){
            lista.push_back(i);
        }
    }
    for(int i=0;i<lista.size()-1;i++){
        string inverter = texto.substr(0,lista[i]);
        string invertida = "";
        for(int j =0; j < inverter.size();j++){
            invertida+=inverter[inverter.size()-1-j];
        }
        texto = invertida + texto.substr(lista[i],texto.size()-lista[i]);
    }
    string final="";
    for(int i=0;i <= n; i++){
        final += texto[n-i];
    }
    cout << final;
    
    
    }
}