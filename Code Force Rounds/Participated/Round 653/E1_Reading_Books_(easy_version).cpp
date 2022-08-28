#include <bits/stdc++.h>
using namespace std;

vector<int> bob,alice,dois;
int INF=0x3F3F3F3F;

int main(){
	
		int n,k;
		bob.clear();
		alice.clear();
		dois.clear();
		scanf("%d%d",&n,&k);
		for (int i = 0; i < n; ++i)
		{
			int val,a,b;
			scanf("%d%d%d",&val,&a,&b);
			if(a==1&&b==1){
				dois.push_back(val);
			}else if(a==1){
				alice.push_back(val);
			}else if(b==1){
				bob.push_back(val);
			}
		}
		bob.push_back(INF);
		dois.push_back(INF);
		alice.push_back(INF);
		int point1=0,point2=0,total=0;
		bool res=true;
		sort(bob.begin(),bob.end());
		sort(alice.begin(),alice.end());
		sort(dois.begin(),dois.end());
		for (int i = 0; i < k; ++i)
		{
			if(dois[point1]<=bob[point2]+alice[point2]){
				if(dois[point1]==INF){
					res=false;
					break;
				}else{
					total+=dois[point1];
					point1+=1;
				}
			}else{
				total+=bob[point2]+alice[point2];
				point2+=1;
			}
		}
		if(!res){
			total=-1;
		}
		printf("%d",total);
	
}