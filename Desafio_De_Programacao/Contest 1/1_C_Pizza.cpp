#include <bits/stdc++.h>

using namespace std;

int main (){
	long long int pedacos;
	cin >> pedacos;
	if (pedacos ==0){
		cout << "0";
	}else{
		if ((pedacos+1)%2==0){
			cout << ((pedacos+1)/2);
		}else{
			cout << pedacos+1;
		}
	}
	return 0;
}