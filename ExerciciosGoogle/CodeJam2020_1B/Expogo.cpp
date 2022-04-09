#include <bits/stdc++.h>
using namespace std;

string maa(int a,int b){
    if(a==0&&b==0){
        return "";
    }
    cout << a << " " << b<<endl;
	string res="";
	int na,nb;
	if(a%2==1){
		if(((a-1)/2)%2==(b/2)%2){
		    if(a==1&&b==0){
		        return "E";
		    }
		    res="W";
			na=(a+1)/2;
			cout << " 2"<< endl;
			
		}else if(((a+1)/2)%2==(b/2)%2){
		    
		    
			res="E";
			na=(a-1)/2;
			cout << " 1"<< endl;
		}else{
			return "123";
		}
		nb=b/2;
	}else{
		if(((b-1)/2)%2==(a/2)%2){
			res="S";
			nb=(b+1)/2;
			if(a==0&&b==1){
		        return "N";
		    }
			cout << " 4"<< endl;
		}else if(((b+1)/2)%2==(a/2)%2){
		    
			res= "N";
			nb=(b-1)/2;
			cout << " 3"<< endl;
		}else{
		    
			return "123";
		}
		na=a/2;
	}
	string resto = maa(na,nb),c="123";
	
	if(resto==c){
		return "123";
	}else{
		return res+resto;
	}
}

int main(){
	int t;
	cin >> t;
	for (int l = 0; l < t; ++l)
	{
		int a,b;
		cin >> a >>b;
		bool ehA=false,ehB=false;
		if(a<0){
		    ehA=true;
		    a*=-1;
		}
		if(b<0){
		    ehB=true;
		    b*=-1;
		}
		string mapa = maa(a,b);
		cout << "Case #"<<l+1<<": "; 
		if(a%2==b%2){
			mapa="123";
		}
		string c="123";
		if(mapa==c){
			cout << "IMPOSSIBLE"<<endl;
		}else{
		    if(ehA||ehB){
		        string cardeal="EWSN";
		        for(int i=0;i<mapa.size();i++){
		            if(ehB){
		                if(mapa[i]==cardeal[2]){
		                    mapa[i]=cardeal[3];
		                }else if(mapa[i]==cardeal[3]){
		                    mapa[i]=cardeal[2];
		                }    
		            }
		            if(ehA){
		                if(mapa[i]==cardeal[0]){
		                    mapa[i]=cardeal[1];
		                }else if(mapa[i]==cardeal[1]){
		                    mapa[i]=cardeal[0];
		                }  
		            }
		        }
		    }
		    cout << mapa << endl;
		}
	}
}