#include <bits/stdc++.h>

using namespace std;

int main (){
     int n,k;
     cin >> n>>k;
     int total=0;
     bool achado=false; 
     int lista[n];
     for (int i=0;i<n;i++){
         int valor;
         cin >> valor;
         lista[i] = valor;
         if(achado==false){
            if(valor > k){
                achado=true;
            } else{
                total+=1;
            }
         }
    }
     int iterador=total-1,cont=n-1;
     bool nFinalizado = true;
     while (nFinalizado){
        if(lista[cont]>k || cont==iterador){
            nFinalizado=false;
        }else{
            total+=1;
            cont-=1;
        }
     }
     cout << total;
 }