#include <bits/stdc++.h>
using namespace std;

int rec(int atual){
	if(atual==2){
		return 2;
	}
	return rec(atual-2)*2+2;
}

int main(){
	int t;
	cin >> t;
	for (int l = 0; l < t; ++l)
	{
		int n;
		cin>>n;
		cout << rec(n) << endl;
	}
}