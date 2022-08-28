#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        string s,zero="10";
        cin >> s;
        bool um=false,nao=false;
        for(int j=0;j<s.size()-1;j++){
            if(um){
                if(s[j]==zero[1]&&s[j+1]==zero[1]){
                    nao=true;
                }
            }else{
                if(s[j]==zero[0]&&s[j+1]==zero[0]){
                    um=true;
                }
            }
        }
        if(nao){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }
    }

    return 0;
}
