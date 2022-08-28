#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	for (int l = 0; l < t; ++l)
	{
		int n,m;
		cin >> n >> m;
		if(n<m){
			swap(n,m);
		}
		int MIN=n-m;
		n-=MIN;
		m-=MIN;
		int total=MIN;
		if(m<0){
			total-=m*-1;
		}else if(m>0){
			total+=2*(m/3);
			m=m%3;
			if(m==2){
				total+=1;
			}
		}
		cout << total << endl;

	}
}