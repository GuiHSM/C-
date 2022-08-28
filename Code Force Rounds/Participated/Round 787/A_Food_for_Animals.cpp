#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
    int a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;
    if(max((d-a),0)+max((e-b),0)>c){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }
    }
}
