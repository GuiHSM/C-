#include <bits/stdc++.h>
using namespace std;


int main(){
	int t;
	cin >> t;
	string zero = "0";
	for(int l=0;l<t;l++){
	    string val;
	    cin >> val;
	    int aberto=0,ahAbrir=0,ahFechar=0;
	    cout << "Case #" << (l+1) << ": ";
	    for(int i=0;i<val.size();i++){
	        int k = val[i]-zero[0];
	        ahAbrir=0;ahFechar=0;
	        if(k< aberto){
	            ahFechar=aberto-k;
	        }else if(k>aberto){
	            ahAbrir =k- aberto;
	        }
	        aberto =k;
	        for(int  j=0; j<ahFechar;j++){
	            cout << ")";
	        }
	        for(int j=0; j<ahAbrir;j++){
	            cout << "(";
	        }
	        cout << k;
	    }
	    for(int i =0;i<aberto;i++){
	        cout << ")";
	    }
	    cout << endl;
	}
}