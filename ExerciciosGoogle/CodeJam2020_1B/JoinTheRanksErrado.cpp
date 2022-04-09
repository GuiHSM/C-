#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	for (int l = 0; l < t; ++l)
	{
		int r,s;
		cin >> r >> s;
		cout << "Case #"<<l+1<<": "<< ((r-1)*(s-1))<<endl;
		for (int i = r; i >1; --i)
		{
			for (int j = 0; j < s-1; ++j)
			{
				cout << (i*(s-1)-j) << " "<<(i-1)<<endl;
			}
		}
	}
}