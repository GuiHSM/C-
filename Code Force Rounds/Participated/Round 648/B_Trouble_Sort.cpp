#include <bits/stdc++.h>
using namespace std;



int main(){
	int t;
	cin >> t;
	for (int l = 0; l < t; ++l)
	{
		int n;
		cin >> n;
		int ant=0;
		bool res=true;
		for (int i = 0; i < n; ++i)
		{
			int a;
			cin >> a;
			if(a<ant){
				res=false;
			}
			ant=a;
		}
		cin >> ant;
		for (int i = 0; i < n-1; ++i)
		{
		  	int a;
		  	cin >> a;
		  	if(a!=ant){
		  		res=true;
		  	}
		} 
		if(res){
			cout << "Yes"<<endl;
		}else{
			cout << "No"<<endl;
		}
	}
}