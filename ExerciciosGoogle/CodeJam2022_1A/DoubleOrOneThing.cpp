#include <bits/stdc++.h>
using namespace std;

int con=100000;
int tudo[100000];
string a="A";

int main(){
    int t;
    cin>>t;
    for(int l=0;l<t;l++){
        int n,res=0;
        string s;
        cin>>s;
        n=s.size();
        cout<<"Case #"<<l+1<<": ";
        int i=0,igual=0;
        while(i<n-1){
            igual+=1;
            if(s[i]-a[0]<s[i+1]-a[0]){
                for (int j = 0; j < igual; ++j)
                {
                    cout<<s[i]<<s[i];
                }
                igual=0;
            }else if(s[i]-a[0]>s[i+1]-a[0]){
                for (int j = 0; j < igual; ++j)
                {
                    cout<<s[i];
                }
                igual=0;
            }
            i+=1;
        }
        igual+=1;
        for (int j = 0; j < igual; ++j)
        {
            cout<<s[n-1];
        }
        cout<<"\n"; 
    }
}