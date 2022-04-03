#include <bits/stdc++.h>
using namespace std;

vector<int> lista,maximo;

void revert(int a,int b){
    while(a<b){
        int um=lista[a];
        lista[a]=lista[b];
        lista[b]=um;
        a+=1;
        b-=1;
    }
    return;
}
int main(){
    int t;
    maximo.push_back(0);
    maximo.push_back(0);
    for(int i=2;i<101;i++){
        maximo.push_back(maximo[i-1]+i);
    }
    scanf("%i",&t);
    for (int k = 0; k < t; ++k)
    {
        int n,c;
        scanf("%i%i",&n,&c);
        if(c>maximo[n]||c<n-1){
            printf("Case #%i: IMPOSSIBLE\n",k+1);
        }else{
            printf("Case #%i: ",k+1);
            lista.clear();
            for (int i = 0; i < n; ++i)
            {
                lista.push_back(i+1);
            }
            c-=n-1;
            for(int i=1;i<n;++i){
                int val=i;
                val=min(val,c);
                revert(n-i-1,n-i-1+val);
                c-=val;
            }
            for (int i = 0; i < n; ++i)
            {
                int val=lista[i];
                printf("%i ",val);
            }
            printf("\n");
        }
    }
}