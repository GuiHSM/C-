#include <bits/stdc++.h>

using namespace std;

int main (){
    int tamanho,maior=0,indice;
    string texto;
    string duos="";
    int valor[101];
    
    cin >> tamanho;
    cin >> texto;
    
    if(tamanho==2){
        cout << texto;
        return 0;
    }
    for(int i=0;i<tamanho-1;i++){
        bool nAchado=true;
        for(int j=0;j<(duos.size()/2);j++){
            if(duos[j*2]==texto[i] && duos[j*2+1]==texto[i+1]){
                nAchado=false;
                valor[j]+=1;
                if(valor[j]>maior){
                    indice=i;
                    maior=valor[j];
                }
            }
        }if (nAchado){
            duos =duos + texto[i]+texto[i+1];
            valor[(duos.size())/2-1]=1;
            if(valor[(duos.size())/2-1]>maior){
                indice = i;
                maior = valor[(duos.size())/2-1];
            }
        }

    }
    string resu ="";
    resu= resu+texto[indice]+texto[indice+1];
    cout << resu;

}