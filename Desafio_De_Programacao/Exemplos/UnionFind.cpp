#include <bits/stdc++.h>
using namespace std;

const int MAX = 1e5 + 10;
int n,k;
int pai[MAX],sz[MAX];

int taiz(int a){
	if(pai[a] == a){
		return a;
	}
	return pai[a] = raiz(pai[a]);
}

bool find(int a, int b){
	return raiz(a)==raiz(b);
}

void une(int a,int b){
	a = raiz(a);
	b = raiz(b);
	if (a==b) return;
	if(sz[b]>sz[a]) swap(a,b);
	pai[b] = a;
	sz[a] +=sz[b];
}

int main(){
	cin >> n >> k;
	for(int i=0;i<n;i++){
		sz[i] = 1;
		pai[i] = i;
	}
	for(int i=0;i<k;i++){
		char op;
		int a,b;
		cin >> op >> a >> b;
		if(op=="C"){
			cout << find(a,b);
		}else{
			une(a,b);
		}
	}


}