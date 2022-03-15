#include <bits/stdc++.h>
using namespace std;

int main(){
  int max=1e9;
  int min = 1;
  int meio = (max+min)/2;
  cout << "Q " << meio<<endl<<flush;
  string resposta,valores="=<";
  cin >> resposta;
  while(resposta[0]!=valores[0]){
    if(resposta[0] == valores[1]){
      max = meio;
    }else{
      min = meio+1;
    }
    meio = (max+min)/2;
    cout <<"Q " <<meio<<endl<<flush;
    cin >> resposta;
  }
}


