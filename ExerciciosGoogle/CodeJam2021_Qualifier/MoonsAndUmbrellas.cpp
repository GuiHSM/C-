#include <bits/stdc++.h>
using namespace std;

string s;
vector<int> lista;

int main(){
    int t;
    cin >> t;
    string con="CJ?";
    for (int k = 0; k < t; ++k)
    {
        int x,y;
        lista.clear();
        cin >> x >> y;
        cin >> s;
        bool primeiro=true;
        for(int i=0;i<s.size();i++){
            if(s[i]==con[0]){
                lista.push_back(0);
            }else if(s[i]==con[1]){
                lista.push_back(1);
            }else{
                lista.push_back(2);
            }
        }
        int total=0;
        int tipo=lista[0],qtn=1;
        for(int i=0;i<s.size();i++){
            if(lista[i]==2){
                qtn+=1;
            }else {
                if(tipo==0){
                    if(lista[i]==0){
                        total+=min(0,qtn/2*(x+y));
                    }else{
                        total+=min(x,(qtn+qtn%2)/2*x+((qtn+qtn%2)/2-1)*y);
                    }
                }else if(tipo==1){
                    if(lista[i]==0){
                        total+=min(y,(qtn+qtn%2)/2*y+((qtn+qtn%2)/2-1)*x);
                    }else{
                        total+=min(0,qtn/2*(x+y));
                    }
                }else{
                    if(lista[i]==0){
                        total+=min(0,min(y,min((qtn-qtn%2)/2*x+(qtn-qtn%2)/2*y,((qtn-qtn%2)/2-(qtn-1)%2)*x+((qtn-qtn%2)/2+(qtn)%2)*y)));
                    }else{
                        total+=min(0,min(x,min((qtn-qtn%2)/2*x+(qtn-qtn%2)/2*y,((qtn-qtn%2)/2-(qtn-1)%2)*y+((qtn-qtn%2)/2+(qtn)%2)*x)));
                    }
                }
                qtn=1;
                tipo=lista[i];
            }
        }
        if(qtn>0){
            if(tipo==0){
                total+=min(0,min(y,min((qtn-qtn%2)/2*x+(qtn-qtn%2)/2*y,((qtn-qtn%2)/2-(qtn-1)%2)*x+((qtn-qtn%2)/2+(qtn)%2)*y)));
            }else if(tipo==1){
                total+=min(0,min(x,min((qtn-qtn%2)/2*x+(qtn-qtn%2)/2*y,((qtn-qtn%2)/2-(qtn-1)%2)*y+((qtn-qtn%2)/2+(qtn)%2)*x)));
            }else{
                total+=min(min(0,min(x,min((qtn-qtn%2)/2*x+(qtn-qtn%2)/2*y,((qtn-qtn%2)/2-(qtn-1)%2)*y+((qtn-qtn%2)/2+(qtn)%2)*x))),min(0,min(y,min((qtn-qtn%2)/2*x+(qtn-qtn%2)/2*y,((qtn-qtn%2)/2-(qtn-1)%2)*x+((qtn-qtn%2)/2+(qtn)%2)*y))));
            }
        }
        printf("Case #%i: %i\n",k+1,total);
    }
}