#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	for (int i = 0; i < t; ++i)
	{
		int n;
		cin >> n;
		if(n%2==0){
			n-=2;
		}else{
			n-=1;
		}
		cout << n/2<<endl;
	}
}