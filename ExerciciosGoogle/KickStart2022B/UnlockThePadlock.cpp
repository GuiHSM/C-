#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	scanf("%i",&t);
	for(int l=0;l<t;l++){
		int n,d;
		scanf("%i%i",&n,&d);
		int lista[400];
		for (int i = 0; i < n; ++i)
		{
			int val;
			scanf("%i",&val);
			lista[i]=val;
		}
		int ponteiro1=0,ponteiro2=n-1, operacoes=0,total=0;
		int val1,val2;
		while(ponteiro1<=ponteiro2){
			val1=lista[ponteiro1]-total;
			val2=lista[ponteiro2]-total;
			if(abs(val1)<=abs(val2)&&abs(val1)<=d-abs(val1)&&abs(val1)<=d-abs(val2)){
				operacoes+=abs(val1);
				total+=val1;
				ponteiro1+=1;
				
			}else if(abs(val1)>=abs(val2)&&abs(val2)<=d-abs(val1)&&abs(val2)<=d-abs(val2)){
				operacoes+=abs(val2);
				total+=val2;
				ponteiro2-=1;
			}else if(d-abs(val1)<=abs(val2)&&abs(val1)>=d-abs(val1)&&d-abs(val1)<=d-abs(val2)){
				operacoes+=d-abs(val1);
				if(val1>0){
					total-=d-val1;
				}else{
					total+=d+val1;
				}
				ponteiro1+=1;
			}else{
				operacoes+=d-abs(val2);
				if(val1>0){
					total-=d-val2;
				}else{
					total+=d+val2;
				}
				ponteiro2-=1;
			}
			if(total>d){
				total=total-d;
			}
			if(total<0){
				total=d+total;
			}
		}
		printf("Case #%i: %i\n",l+1,operacoes);
    }
}