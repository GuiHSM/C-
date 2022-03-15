#include <bits/stdc++.h>

using namespace std;

int main (){
  int n,k;
  cin>>n>>k;
  int lista[n];
  for(int i=0;i<n;i++){
    int valor;
    cin >>valor;
    lista[i]=valor;
  }
  int valor = sizeof(lista)/sizeof(lista[0]); 
  sort(lista, lista+valor); 
  if(k==0){
    if(lista[0]-1 >=1){
      cout << lista[0]-1;
    }else{
      cout << -1;
    }
    return 0;
  }
  if(n==k){
    cout<<lista[k-1]+1;
    return 0;
  }
  if(lista[k]<=lista[k-1]){
    cout<<"-1";
  }else{
    cout << lista[k]-1;  
  }return 0;
}