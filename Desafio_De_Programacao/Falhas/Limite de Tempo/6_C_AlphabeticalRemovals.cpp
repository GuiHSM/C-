#include <bits/stdc++.h>

using namespace std;

int main (){
    
    string alfabeto = "abcdefghijklmnopqrstuvwxyz";
    int n,k;
    cin >>n>>k;
    string texto;
    cin >> texto;
    if(n==k){
        cout << "";
    }else{
        vector<int> matriz[26];
        for(int i=0;i<n;i++){
            bool nAchado=true;
            int cont=0;
            while(nAchado){
                if(texto[i]==alfabeto[cont]){
                    matriz[cont].push_back(i+1);
                    nAchado=false;
                }
                cont+=1;
            }
        }
        string final="";
        vector<int> fin;
        for(int i = 0;i<k;i++){
            bool nAchado=true;
            int cont=0;
            while (nAchado){
                if(matriz[cont].size()==0){
                    cont+=1;
                }else{
                    nAchado=false;
                    fin.push_back(matriz[cont][0]-1);
                    matriz[cont].erase(matriz[cont].begin());
                }
            }
        }
        sort (fin.begin(), fin.end());
        int j = 0,max = fin.size();
        fin.push_back(n);
        for(int i=0; i<n; i++){
            if(i!=fin[j]){
                final+=texto[i];
                
            }else{
                j+=1;
            }
        }
        cout << final;
    }
}
