#include <bits/stdc++.h>
using namespace std;

int main()
{
	int l,r,c;
	cin >> l >> r >> c;
	vector<vector<string>> dungeon;
	vector<vector<vector<bool>>> visitado;
	vector<string> vazio;
	vector<bool> vazioB;
	vector<vector<bool>> vazioLongoB;
	string s="S.E";
	queue<int> vazia;
	while(!(l==0&&r==0&&c==0)){

		queue<int> fila;
		visitado.clear();
		dungeon.clear();
		for (int i = 0; i < l; ++i)
		{
			dungeon.push_back(vazio);
			visitado.push_back(vazioLongoB);
			for (int j = 0; j < r; ++j)
			{
				visitado[i].push_back(vazioB);
				string linha;
				cin >> linha;
				dungeon[i].push_back(linha);
				for (int k = 0; k < c; ++k)
				{
					visitado[i][j].push_back(true);
					if(dungeon[i][j][k]==s[0]){
						fila.push(i);
						fila.push(j);
						fila.push(k);
						fila.push(0);
						visitado[i][j][k]=false;
					}
				}
			}
		}		  	
	
		vector<int> dx,dy,dz;
		dx.push_back(-1);
		dx.push_back(1);
		dx.push_back(0);
		dx.push_back(0);
		dx.push_back(0);
		dx.push_back(0);
		
		dy.push_back(0);
		dy.push_back(0);
		dy.push_back(-1);
		dy.push_back(1);
		dy.push_back(0);
		dy.push_back(0);

		dz.push_back(0);
		dz.push_back(0);
		dz.push_back(0);
		dz.push_back(0);
		dz.push_back(1);
		dz.push_back(-1);
		bool achou = false;
		int total;
		while(!fila.empty()){
			int x,y,z;
			x=fila.front();
			fila.pop();
			y=fila.front();
			fila.pop();
			z=fila.front();
			fila.pop();
			int pontos = fila.front();
			fila.pop();
			for (int i = 0; i < 6; ++i)
			{
				if((x-dx[i]>-1)&&(y-dy[i]>-1)&&(z-dz[i]>-1)&&(x-dx[i]<l)&&(y-dy[i]<r)&&(z-dz[i]<c)) {
					if(s[1]==dungeon[x-dx[i]][y-dy[i]][z-dz[i]]){
						if(visitado[x-dx[i]][y-dy[i]][z-dz[i]]){
							fila.push(x-dx[i]);
							fila.push(y-dy[i]);
							fila.push(z-dz[i]);
							fila.push(pontos+1);
							visitado[x-dx[i]][y-dy[i]][z-dz[i]]=false;
						}
					}else if(s[2]==dungeon[x-dx[i]][y-dy[i]][z-dz[i]]){
						fila=vazia;
						achou=true;
						total=pontos+1;
					}
				}
			}
		}
		if(achou){
			cout <<"Escaped in "<<total<<" minute(s)."<<endl;
		}else{
			cout << "Trapped!"<<endl;
		}
		cin >> l >> r >> c;
	}
}