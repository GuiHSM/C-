#include <bits/stdc++.h>

using namespace std;

int main (){
  int t;
  cin >> t;
  vector<int> matriz[t];
  for (int i = 0; i < t; ++i)
  {
    vector<int> lista;
    int n,soma=0;
    cin >> n;
    for (int j=0;j<n; ++j)
    {
      int valor;
      cin >> valor;
      soma+=valor; 
      lista.push_back(valor);  
    }
    for (int j=0;j<n; ++j)
    { 
      matriz[i].push_back(soma-lista[j]);  
    }
    sortie(matriz[i],matriz[i]+n);  
  }
  bool notFound=true;
  while (notFound){
    int x,y;
  }
}