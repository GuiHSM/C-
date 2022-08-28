#include <bits/stdc++.h>
using namespace std;

int lista[30];

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        string n,zero="0";
        cin>>n;
        bool nApareceu=true;
        int total=0,ultimoSim=0,primeiroNao=n.size()-1;
        for(int j=0;j<n.size();j++){
            if(n[j]-zero[0]==0&&nApareceu){
                primeiroNao=j;
                nApareceu=false;
            }if(n[j]-zero[0]==1&&nApareceu){
                ultimoSim=j;
            }else if(n[j]-zero[0]==1){
                total=1;
            }
        }
        if(total==0){
        
            cout<<primeiroNao-ultimoSim+1;
        
            
        }else{
            cout<<total;
        }
        
        cout<<endl;
    }
}
