#include <bits/stdc++.h>
using namespace std;
 
vector<long long int> v;
 
int main()
{
    int t;
    scanf("%i",&t);
    for(int i=0;i<t;i++){
        long long int n;
        v.clear();
        scanf("%lld",&n);
        for(int j=0;j<n;j++){
            int a;
            scanf("%i",&a);
            v.push_back(a);
        }
        long long int totalfinal=v[0]*n+v[1]*n,menor1=v[0],menor2=v[1];
        long long int totalM=v[0]*n+v[1]*n;
        for(long long int j=2;j<n;j++){
            if((v[j]<menor1&&j%2==0)||(v[j]<menor2&&j%2==1)){
                if(j%2==0){
                    totalM-=menor1*(n-j/2);
                    totalM+=v[j]*(n-j/2);
                    menor1=v[j];
                }else{
                    totalM-=menor2*(n-j/2);
                    totalM+=v[j]*(n-j/2);
                    menor2=v[j];
                }
            }else{
                if(j%2==0){
                    totalM-=menor1;
                    totalM+=v[j];
                }else{
                    totalM-=menor2;
                    totalM+=v[j];
                }
            }
            if(totalM<totalfinal){
                totalfinal=totalM;
            }
            
        }
        printf("%lld\n",totalfinal);
    }
 
    return 0;
}