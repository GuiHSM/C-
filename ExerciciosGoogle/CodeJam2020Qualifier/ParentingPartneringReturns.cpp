#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> comeco,fecha;
vector<int> obras;

bool encher(){
    int ocupado[2];
    ocupado[0] = 0;
    ocupado[1] = 0;
    for (int i = 0; i < 1441; ++i)
    {
       if(fecha[i][0]>0&&fecha[i][1]==0){
            if(ocupado[0]==fecha[i][0]){
                ocupado[0] = 0;
            }else{
                ocupado[1] = 0;
            }
       }else if(fecha[i][1]>0){
            ocupado[0] = 0;
            ocupado[1]=0;
       }
       if(comeco[i][0]>0&&comeco[i][1]==0){
            if(ocupado[0]>0&&ocupado[1]>0){
                return false;
            }else if(ocupado[0]>0){
                ocupado[1] = comeco[i][0];
                obras[comeco[i][0]] = 1;
            }else{
                ocupado[0] = comeco[i][0];
                obras[comeco[i][0]] = 0;
            }
       }else if(comeco[i][1]>0){
            if(ocupado[0]>0 ||ocupado[1]>0){
                return false;
            }else{
                obras[comeco[i][0]] = 0;
                obras[comeco[i][1]] = 1;
                ocupado[0] = comeco[i][0];
                ocupado[1] = comeco[i][1];
            }
       }
    }
    return true;
}

int main()
{
    int t;
    cin >> t;
    for (int j = 0; j < t; ++j)
    {
        int n;
        cin >> n;
        vector<int> vazio;
        obras.clear();
        comeco.clear();
        fecha.clear();
        for(int i=0; i <1441;i++){
            obras.push_back(-1);
            fecha.push_back(vazio);
            fecha[i].push_back(0);
            fecha[i].push_back(0);
            comeco.push_back(vazio);
            comeco[i].push_back(0);
            comeco[i].push_back(0);
            }
        bool funfou = true;
        for(int i=0; i < n;i++){
            int s,e;
            cin >> s >> e;
            if(funfou)
            {   
                if(comeco[s][0]==0){
                    comeco[s][0] = i+1;
                }else if(comeco[s][1] == 0){
                    comeco[s][1] = i+1;
                }else{
                    funfou = false;
                }
            }
            if(funfou)
            {   
                if(fecha[e][0]==0){
                    fecha[e][0] = i+1;
                }else if(fecha[e][1] == 0){
                    fecha[e][1] = i+1;
                }else{
                    funfou = false;
                }
            }
        }
        cout << "Case #" << (j+1) << ": ";
        if(funfou){
            funfou = encher();
            if(funfou){
                for(int i=1; i <= n;i++){
                    if(obras[i]==0){
                        cout << "C";
                    }else if(obras[i]<0){
                        cout << "E";
                    }
                    else{
                        cout << "J";
                    }
                }
            }else{
                cout << "IMPOSSIBLE";
            }
        }else{
            cout << "IMPOSSIBLE";
        }
        cout << endl;
    }
}