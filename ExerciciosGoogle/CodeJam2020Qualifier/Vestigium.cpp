#include <bits/stdc++.h>
using namespace std;


int main(){
	vector<vector<int>> coluna,linha;
	map<int,bool> linhaM,colunaM;
	 vector<int> vazio;
	int d,t;
	cin >> t;
	for(int k=0;k<t;k++){
	    d=0;
	    int n,col=0,lin=0;
	    cin >> n;
	    vector<int> vazio;
	    for(int i=0;i<n;i++){
	        coluna.push_back(vazio);
	        linha.push_back(vazio);
	        for(int j=0;j<n;j++){
	            coluna[i].push_back(0);
	            linha[i].push_back(0);
	        }
	        
	    }
	    for(int i=0;i<n;i++){
	        for(int j=0;j<n;j++){
	            int x;
	            cin >> x;
	            if(i==j){
	                d+=x;
	            }
	            if(!linhaM[i]){
	               if(linha[i][x-1]>0){
	                   linhaM[i] = true;
	                   lin+=1;
	               }else{
	                   linha[i][x-1] = 10;
	               }
	            }
	            if(!colunaM[j]){
	                if(coluna[j][x-1]>0){
	                   colunaM[j] = true;
	                   col +=1;
	               }else{
	                   coluna[j][x-1] = 10;
	               }
	            }
	        }
	    }
	    cout << "Case #"<< (k+1) << ": "<< d << " " << lin << " " << col << endl; 
	    coluna.clear();
	    linha.clear();
	    linhaM.clear();
	    colunaM.clear();
	}
}