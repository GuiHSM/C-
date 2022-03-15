#include <bits/stdc++.h>

using namespace std;

int main (){
	string t,as="a",teste="";
	cin >> t;
	int atual=0,total = t.size(),a=0;
	while (2*(atual-a)<total-a){
		if(t[atual]==as[0]){
			a+=1;
		}else{
		    teste+=t[atual];
		}
		atual+=1;
	}
	if (2*(atual-a)==total-a && teste==t.substr(atual,t.size()-1)){
		cout << t.substr(0,atual);
	}else{
		cout << ":(";
	}return 0;
}