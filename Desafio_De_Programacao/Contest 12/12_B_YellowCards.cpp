#include <bits/stdc++.h>
using namespace std;


int main(){
	int ai,a2,k1,k2,n;
	cin >> ai;
	cin >> a2;
	cin >> k1;
	cin >> k2;
	cin >> n;

	int max = (k2-1)*a2 + (k1-1)*ai;
	if(n>max){
		if((n-max)<=(ai+a2)){
			cout << n-max;
		}else{
			cout << (ai+a2);
		}
		
	}else{
		cout << 0;
	}

	int copN=n,am,km,aM,kM;
	if(k1>k2){
		am = a2;
		km = k2;
		kM = k1;
		aM =ai;
	}else{
		am = ai;
		km = k1;
		kM = k2;
		aM = a2;
	}

	int min;
	if(n>(km*am)){
		min = am+((n-(am*km))/kM);
	}else{
		min = n/(km);
	}
	cout << " " << min;
}