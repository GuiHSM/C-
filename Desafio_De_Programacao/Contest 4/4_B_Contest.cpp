#include <bits/stdc++.h>

using namespace std;

int main (){
	int contest,anterior=0,maximo=1,contagem=1;
	cin >> contest;
	for (int i = 0; i < contest; i++)
	{
		int proximo;
		cin >> proximo;
		if(proximo>2*anterior){
			if (maximo<contagem){
				maximo=contagem;
				
			}
			contagem=1;
			anterior=proximo;
		}else{
			contagem+=1;
			anterior=proximo;
		}
	}
	cout << maximo;
	return 0;
}