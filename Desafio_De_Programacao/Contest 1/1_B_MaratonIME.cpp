#include <bits/stdc++.h>

using namespace std;

int main (){
	int i;
	int soma=0;
	cin >> i;
	for(int g=0;g<i;g++){
		int a;
		cin >> a;
		soma+=a;
	} 
	i=((5-soma%5)+soma)/5;
	if (soma %5==0){
		i-=1;
	}
	cout << i;
}