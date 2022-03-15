#include <bits/stdc++.h>

using namespace std;

int main (){
	int numeroTabs,cursorPos,l,r;
	cin >>numeroTabs>> cursorPos>>l>>r;
	if(cursorPos<=r && cursorPos>=l){
		if(r==numeroTabs){
			if(l==1){
				cout << "0";
				return 0;
			}
			int valor=cursorPos-l;
			cout << valor+1;
		}else if(l==1){
			int valor=r-cursorPos;
			cout << valor+1;
		}else{
			int menorD=r-cursorPos,maiorD=cursorPos-l;
			if(menorD>maiorD){
				menorD=maiorD;
				maiorD=r-cursorPos;
			}
			int valor = maiorD + 2*menorD+2;
			cout << valor;
		}

	}else if(cursorPos<l){
		if(r==numeroTabs){
			int valor = l- cursorPos;
			cout << valor+1;
		}else{
			int valor = r-cursorPos;
			cout << valor+2;
		}
	}else{
		if(l==1){
			int valor =cursorPos-r;
			cout << valor+1;
		}else{
			int valor = cursorPos-l;
			cout << valor+2;
		}
	}
	return 0;
}
