#include <bits/stdc++.h>
using namespace std;
 
int main(){
	int t;
	cin>>t;
	string aux="a";
	for (int i = 0; i < t; ++i)
	{
		string a,b;
		cin>>a>>b;
		int par=(a[0]==a[1])+(a[0]==b[0])+(a[0]==b[1])+(a[1]==b[0])+(a[1]==b[1])+(b[0]==b[1]);
		if(par==1){
			cout<<2<<endl;
		}else if(par==0){
			cout<<3<<endl;
		}else if(par==6){
		    cout<<0<<endl;
		}else{
		    cout<<1<<endl;
		}
		
	}
 
}