#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> t1,t2;

int main(){
	cin >> n;
	string a1,a2,ab="ab";
	int as1=0,as2=0,bs1=0,bs2=0;
	vector<int> difab,difba;
	cin >> a1;
	cin >> a2;
	for (int i = 0; i < n; ++i)
	{
		if(a1[i] == ab[0]){
			if(a1[i]!=a2[i]){
				difab.push_back(i);
			}
			t1.push_back(0);
			as1+=1;
		}else{
			if(a1[i]!=a2[i]){
				difba.push_back(i);
			}
			t1.push_back(1);
			bs1+=1;
		}
		if(a2[i] == ab[0]){
			t2.push_back(0);
			as2+=1;
		}else{
			t2.push_back(1);
			bs2+=1;
		}
	}
	if(((as1+as2)%2==1)||(bs1+bs2)%2==1){
		cout << "-1";
	}else{
		int total=0;
		if(difba.size()%2==1){
			total+=2;
		}
		total+=difba.size()/2;
		total += difab.size()/2;
		cout << total << endl;
		for (int i = 1; 2*i <= difab.size(); ++i)
		{
			cout << (difab[2*(i-1)]+1) << " " << (difab[2*(i-1)+1]+1)<< endl;
		}
		for (int i = 1; 2*i <= difba.size(); ++i)
		{
			cout <<(difba[2*(i-1)]+1) << " " << (difba[2*(i-1)+1]+1)<< endl;
		}
		if(difba.size()%2==1){
			cout <<(difba[difba.size()-1]+1) << " " <<(difba[difba.size()-1]+1) << endl;
			cout <<(difba[difba.size()-1]+1) << " " << (difab[difab.size()-1]+1) << endl;
		}

	}
}