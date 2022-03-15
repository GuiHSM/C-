#include <bits/stdc++.h>

using namespace std;

int main (){
	int t;
	cin >> t;
	for (int i = 0; i < t; ++i)
	{
		int k,x,y;
		cin >> x >> y >> k;
		int menor = x,maior =y;
		if (menor > maior){
			int escapula= maior;
			maior = menor;
			menor = escapula;
		}
		if(maior > k){
			cout << -1 << endl;
		}else{
			int retas = 0;
			if(maior%2!= menor%2){
    			    retas+=1;
			}else{if(k%2!=menor%2){
			        retas += 2;
    			}
			}
			cout << k-retas << endl;
		}

	}
}