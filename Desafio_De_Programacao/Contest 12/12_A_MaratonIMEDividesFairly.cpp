#include <bits/stdc++.h>
using namespace std;


int main(){
int t;
cin >> t;
for (int i = 0; i < t; ++i)
{
	int a,b;
	cin >> a >> b;
	if(a-b== 1 || a-b == 0 || b-a == 1){
		cout << "Ok"<<endl;
	}else{
		int c,d,e = max(a,b),f=min(a,b);
		if((e-f)%2==0){
			c=(a+b)/2;
			d=c;
		}else{
			c=(a+b)/2;
			d=c+1;
		}
		cout << c << " " << d << endl;
	}
}

}