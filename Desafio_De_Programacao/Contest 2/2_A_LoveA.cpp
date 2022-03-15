#include <bits/stdc++.h>

using namespace std;

int main (){
	string t,a="a";
	cin >> t;
	int as=0,naoAs=0;
	for (int i = 0; i < t.size(); i++)
	{
		if (t[i]==a[0]){
			as+=1;
		}else{
			naoAs+=1;
		}
	}
	int valor=as;
	if (naoAs>=as){
		valor+=as-1;
	}else{
		valor+=naoAs;
	}
	cout << valor;
	return 0;


}