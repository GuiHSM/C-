#include <bits/stdc++.h>

using namespace std;

string alterar(string valor,int atual){
    string numeros="012356789";
    if(atual != valor.size()){
        if(valor[valor.size()-1-atual]==numeros[0]){
            valor.replace(valor.size()-1-atual,1,"9");
            valor = alterar(valor,atual+1);
        }else{
            for(int i =1;i<numeros.size();i++){
                if(i!=4 && i!=1 && valor[valor.size()-1-atual]==numeros[i]){
                    valor.replace(valor.size()-1-atual,1,numeros.substr(i-1,1));
                }else if(valor[valor.size()-1-atual]==numeros[i] && i==1){
                    if(valor.size()-1-atual==0){
                        valor.replace(valor.size()-1-atual,1,"");
                    }else{
                        valor.replace(valor.size()-1-atual,1,"0");
                    }
                }else if(i==4 && valor[valor.size()-1-atual]==numeros[i]){
                    valor.replace(valor.size()-1-atual,1,"4");
                }
            }
        }
    }
    return valor;
}
vector<int> vai (string falso){
    string valor,quatro="45";
        valor=falso;
        int D=valor.size();
        string outro = "",vazio="";
        for(int j=0; j< valor.size();j++){
            if(valor[j]==quatro[0]){
                outro+="2";
                valor.replace(j,1,"2");
            }else{
                if(outro != vazio){
                   outro+="0";
                }
            }
        }
        if(outro == vazio){
            if(valor[valor.size()-1]==quatro[1]){
                outro = "2";
                valor.replace(valor.size()-1,1,"3");
            }else{
                valor = alterar(valor,0);
                for(int j=0; j< D-1;j++){
                    if(valor[j]==quatro[0]){
                        outro+="2";
                        valor.replace(j,1,"2");
                    }else{
                        if(outro != vazio){
                           outro+="0";
                        }
                    }
                }
                outro += "1";
            }
        }
        vector<int> duo;
        duo.push_back(stoi(outro));
        duo.push_back(stoi(valor));
        return duo;
    
}
int main(){
    long long int testes = 1000000000;
    int total=0;
    for(long long int i=2; i < testes; i++){
        vector<int> duo = vai(to_string(i));
        if(duo[0]+duo[1]!=i){
            total+=1;
            cout << duo[0]<<"-"<<duo[1]<<"-"<<i<<"-"<< total<< "-----------"<<endl;
        }
    }
    cout << total;
}