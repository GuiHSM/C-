#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	for (int l = 0; l < t; ++l)
	{
		stack<int> pilha2;
		queue<int> pilha1;
		int n;
		cin >> n;
		for (int i = 0; i < n; ++i)
		{
			int val;
			cin >> val;
			pilha1.push(val);
		}
		int atual=1;
		bool deu=true,continua=true;
		while(continua&&atual<=n){
			if(pilha1.front()==atual){
				pilha1.pop();
				atual+=1;
			}else{
				if(!pilha2.empty()){
					if(pilha2.top()==atual){
						pilha2.pop();
						atual+=1;
					}else if(pilha1.empty()){
						continua=false;
						deu=false;
					}else{
						pilha2.push(pilha1.front());
						pilha1.pop();
					}
				}else if(pilha1.empty()){
					continua=false;
					deu=false;
				}
				else{
					pilha2.push(pilha1.front());
					pilha1.pop();
				}
			}
		}
		if(deu){
			cout << "yes"<<endl;
		}else{
			cout << "no"<<endl;
		}
	}
}
