#include <bits/stdc++.h>
using namespace std;



int main(){
	int t;
	scanf("%d",&t);
	for (int l = 0; l < t; ++l)
	{
		int x,y,n;
		scanf("%d%d%d",&x,&y,&n);
		if(n%x>y){
			printf("%d\n",(n-n%x+y));
		}else if(n%x<y){
			printf("%d\n",(n-n%x-x+y));
		}else{
			printf("%d\n",n);
		}
	}
}