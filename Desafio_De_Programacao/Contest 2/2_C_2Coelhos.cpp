#include <bits/stdc++.h>

using namespace std;

int main (){
  int tentativas;
  cin >> tentativas;
  for (int i = 0; i < tentativas; i++)
  {
    int x,y,a,b;
    cin >> x >> y >> a >> b;
    int distancia = y-x;
    int velocidade = a+b;
    if (distancia%velocidade==0){
      int segundos = distancia/velocidade;
      cout << segundos;
    }else{
      cout << "-1";
    }
    if(i!=tentativas){
      cout<<endl;
    }
  }

}