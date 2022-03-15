#include <bits/stdc++.h>

using namespace std;

int main (){
  int n;
  cin>>n;
  double h1,v1,h2,v2,h3,valor;
  cin >> h2 >> v1;
  cin>>h3>>v2;
  valor=v1*(h2-h3);
  for(int i =2;i<n;i++){
    v1=v2;
    h1=h2;
    h2=h3;
    cin>>h3>>v2;
    valor+= v1*(h1-h3);
  }
  valor+=v2*(h2-h3);
  printf("%f", valor/-2000);
}