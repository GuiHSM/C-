#include <bits/stdc++.h>
using namespace std;

vector<int> lista,pos;

void revert(int a,int b){
    while(a<b){
        int um=lista[a];
        lista[a]=lista[b];
        pos[um]=b;
        pos[lista[b]]=a;
        lista[b]=um;
        a+=1;
        b-=1;
    }
    return;
}

int main()
{
    int t;
    for(int i=0;i<100;i++){
        pos.push_back(0);
    }
    pos.push_back(0);
    scanf("%i",&t);
    for(int k=0;k<t;k++){
        int n;
        lista.clear();
        lista.push_back(0);
        scanf("%i",&n);
        for(int i=0;i<n;i++){
            int a;
            scanf("%i",&a);
            lista.push_back(a);
            pos[a]=i+1;
        }
        int total=0;
        for(int i=1;i<n;i++){
            if(pos[i]==i){
                total+=1;
            }else{
                total+=pos[i]-i+1;
                revert(i,pos[i]);
            }
        }
        printf("Case #%i: %i\n",k+1,total);
    }
    return 0;
}
