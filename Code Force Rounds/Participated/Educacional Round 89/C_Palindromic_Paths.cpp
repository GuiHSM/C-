#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> matriz;
vector<vector<bool>> nVisitado;
vector<int> um,zero;
vector<bool> vazioB;
int n,m;
vector<int> vazio;

int mapear(int x,int y,int dist){
	nVisitado[x][y]=false;
	if(matriz[x][y]==0){
		zero[dist]+=1;
	}else{
		um[dist]+=1;
	}
	if(y+1<m){
		if(nVisitado[x][y+1]){
			mapear(x,y+1,dist+1);
		}
	}
	if(x+1<n){
		if(nVisitado[x+1][y]){
			mapear(x+1,y,dist+1);
		}
	}
}

int main(){
	int t;
	cin >> t;
	for (int l = 0; l < t; ++l)
	{
		cin >> n >> m;
		matriz.clear();
		nVisitado.clear();
		um.clear();
		zero.clear();
		for (int i = 0; i < n+m; ++i)
		{
			um.push_back(0);
			zero.push_back(0);
		}
		for (int i = 0; i < n; ++i)
		{
			matriz.push_back(vazio);
			nVisitado.push_back(vazioB);
			for (int j = 0; j < m; ++j)
			{
				int val;
				cin >> val;
				matriz[i].push_back(val);
				nVisitado[i].push_back(true);
			}
		}
		mapear(0,0,1);
		int total=0;
    	for (int i = 1; i <= (n+m)/2-((n+m)+1)%2; ++i)
    	{
    		int ze=zero[i]+zero[n+m-i],u=um[i]+um[n+m-i];
    		if(u>ze){
    			total+=ze;
    		}else{
    			total+=u;
    		}
    	    
    	}
    	cout << total << endl;
	}
	
}