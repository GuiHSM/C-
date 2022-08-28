#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> valores,good,bad;
vector<vector<bool>>nVisitado;
vector<int> vazio,dx,dy;
vector<bool> vazioB;
int n,m;

void DFS(int x,int y){
	nVisitado[x][y]=false;
	for (int i = 0; i < 4; ++i)
	{
		if(x+dx[i]>=0&&y+dy[i]>=0&&y+dy[i]<m&&x+dx[i]<n){
			if(valores[x+dx[i]][y+dy[i]]!=1&&nVisitado[x+dx[i]][y+dy[i]]){
				DFS(x+dx[i],y+dy[i]);
			}			
		}
	}
}


int main(){
	int t;
	cin >> t;
	dx.push_back(1);
	dx.push_back(0);
	dx.push_back(-1);
	dx.push_back(0);
	dy.push_back(0);
	dy.push_back(1);
	dy.push_back(0);
	dy.push_back(-1);
	string val = ".#BG";
	for (int l = 0; l < t; ++l)
	{
		cin >> n >> m;
		valores.clear();
		nVisitado.clear();
		good.clear();
		bad.clear();
		for (int i = 0; i < n; ++i)
			{
				nVisitado.push_back(vazioB);
				for (int j = 0; j < m; ++j)
				{
					nVisitado[i].push_back(true);
				}
			}
			
		for (int i = 0; i < n; ++i)
		{
			string a;
			cin >> a;
			valores.push_back(vazio);
			for (int j = 0; j < m; ++j)
			{
				if(a[j]==val[0]){
					valores[i].push_back(0);
				}else if(a[j]==val[1]){
					valores[i].push_back(1);
				}else if(a[j]==val[2]){
					bad.push_back(vazio);
					bad[bad.size()-1].push_back(i);
					bad[bad.size()-1].push_back(j);
					valores[i].push_back(2);
				}else{
					valores[i].push_back(3);
					good.push_back(vazio);
					good[good.size()-1].push_back(i);
					good[good.size()-1].push_back(j);
				}
			}
		}
		bool res = true;
		for (int i = 0; i < bad.size(); ++i)
		{
			int x=bad[i][0],y=bad[i][1];
			if(x==n-1&&y==m-1){
				res=false;
			}
			for (int j = 0; j < 4; ++j)
			{
				if(x+dx[j]>=0&&y+dy[j]>=0&&y+dy[j]<m&&x+dx[j]<n){
					if(valores[x+dx[j]][y+dy[j]]==0||valores[x+dx[j]][y+dy[j]]==1){
						valores[x+dx[j]][y+dy[j]]=1;
					}else if(valores[x+dx[j]][y+dy[j]]==3){
						res=false;
					}
				}
			}
		}
		if(valores[n-1][m-1]!=1){
		    DFS(n-1,m-1);
		}
		
		for (int i = 0; i < good.size(); ++i)
		{
		    
			if(nVisitado[good[i][0]][good[i][1]]){
				res=false;
			}
		}
		if(res){
			cout << "Yes"<<endl;
		}else{
			cout << "No"<<endl;
		}
	}

}