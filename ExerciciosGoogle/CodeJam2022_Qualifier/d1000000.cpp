#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    scanf("%i",&t);
    for(int k=0;k<t;k++){
        int n;
        scanf("%i",&n);
        int a[100000];
        for(int i=0;i<n;i++){
            int val;
            scanf("%i",&val);
            a[i]=val;
        }
        sort(a,a+n);
        int res=n;
        int contador=1;
        for(int i=0;i<n;i++){
            if(a[i]<contador){
                res-=1;
            }else{
                contador+=1;
            }
        }
        printf("Case #%i: %i\n",k+1,res);
    }
}