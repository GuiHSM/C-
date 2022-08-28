#include <bits/stdc++.h>
using namespace std;

int lista[30];

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        for(int j=0;j<n;j++){
            int val;
            cin>>val;
            lista[j]=val;
        }
        int total=0;
        for(int j=n-2;j>=0;j--){
            if(lista[j+1]>0){
            while(lista[j]>=lista[j+1]){
                lista[j]/=2;
                total+=1;
            }
            }else{
                total=-1;
                break;
            }
        }
        cout<<total<<endl;
    }
}
