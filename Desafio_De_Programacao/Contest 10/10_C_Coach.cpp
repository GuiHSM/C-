#include <bits/stdc++.h>
using namespace std;

vector<bool> nVisitado;
vector<vector<int>> adj,dois,tres;
vector<int> um,atuali;

void DFS(int atual){
  nVisitado[atual] = false;
  atuali[0]+=1;
  atuali.push_back(atual);
  for (int i = 0; i < adj[atual].size(); ++i)
  {
    if(nVisitado[adj[atual][i]]){
      DFS(adj[atual][i]);
    }
  }
}

void escrever(){
  for(int i=0;i<tres.size();i++){
    cout << tres[i][0] << " " << tres[i][1] <<" " <<tres[i][2] << endl;
  }
  int a=um.size() - dois.size();
  for(int i=0; i<a/3; i++){
    cout << um[i*3] << " " << um[i*3 +1] << " " << um[i*3+2] << endl;
  }
  for(int i=0; i < dois.size();i++){
    cout << um[a+i] << " " << dois[i][0] << " " << dois[i][1] << endl;
  }
}


int main()
{
  int n, l;
  cin >> n >> l;
  vector<int> vazio;
  vector<vector<int>> lista;
  um = vazio;
  for(int i=0;i<n+1;i++){
    nVisitado.push_back(true);
    adj.push_back(vazio);
  }
  for(int i=0;i<l;i++){
    int a,b;
    cin>>a>>b;
    adj[a].push_back(b);
    adj[b].push_back(a);
  }
  bool nMaior=true;
  vazio.push_back(0);
  for(int i=1;i<n+1;i++){
    if(nVisitado[i]){
      atuali=vazio;
      DFS(i);
      vector<int> grupo = atuali;
      if(grupo[0]==1){
        um.push_back(grupo[1]);
      }else if(grupo[0]==2){
        vector<int> isso;
        isso.push_back(grupo[1]);
        isso.push_back(grupo[2]);
        dois.push_back(isso);
      }else if(grupo[0]==3){
        vector<int> isso;
        isso.push_back(grupo[1]);
        isso.push_back(grupo[2]);
        isso.push_back(grupo[3]);
        tres.push_back(isso);
      }else{
        nMaior=false;
      }
    }
    
  }
  if(((um.size()-dois.size())%3==0)&&nMaior&&(um.size()-dois.size())>=0){
      escrever();
    }else{
      cout<<-1;
  }
  
 }