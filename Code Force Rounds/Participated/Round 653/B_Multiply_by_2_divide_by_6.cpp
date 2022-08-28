#include <bits/stdc++.h>
using namespace std;



int main(){
	int t;
	scanf("%d",&t);
	for (int l = 0; l < t; ++l)
	{
		int n,tres=0,dois=0;
		scanf("%d",&n);
		while(n%3==0){
			tres+=1;
			n/=3;
		}
		while(n%2==0){
			dois+=1;
			n/=2;
		}
		if(n==1&&dois<=tres){
			printf("%d\n",tres+(tres-dois));
		}else{
			printf("-1\n");
		}
	}
}