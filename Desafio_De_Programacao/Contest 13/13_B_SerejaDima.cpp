#include <bits/stdc++.h>
using namespace std;

int main(){
	vector<int> lista,pontos;
	pontos.push_back(0);
	pontos.push_back(0);
	int n;
	cin >>n;
	for (int i = 0; i < n; ++i)
	{
		int val;
		cin>>val;
		lista.push_back(val);
	}
	int point1=0,point2=n-1,pessoa=0;
	while(point2>=point1){
		int val;
		if(lista[point1]>lista[point2]){
			val=lista[point1];
			point1+=1;
		}else{
			val=lista[point2];
			point2-=1;
		}
		pontos[pessoa]+=val;
		if(pessoa==0){
			pessoa=1;
		}else{
			pessoa=0;
		}
	}
	cout << pontos[0] << " " << pessoa[1];
}