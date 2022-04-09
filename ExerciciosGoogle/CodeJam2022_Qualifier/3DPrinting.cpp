#include <bits/stdc++.h>
using namespace std;

int main(){
    int con=1000000;
    int t;
    scanf("%i",&t);
    for(int l=0;l<t;l++){
        int c1,m1,y1,k1;
        scanf("%i%i%i%i",&c1,&m1,&y1,&k1);
        int c2,m2,y2,k2;
        scanf("%i%i%i%i",&c2,&m2,&y2,&k2);
        int c3,m3,y3,k3;
        scanf("%i%i%i%i",&c3,&m3,&y3,&k3);
        int c,m,y,k;
        c=min(min(c1,c2),c3);
        m=min(min(m1,m2),m3);
        y=min(min(y1,y2),y3);
        k=min(min(k1,k2),k3);
        if(c+m+y+k>=con){
            int total=c;
            int cFinal=c,mFinal=0,yFinal=0,kFinal=0;
            if(total+m>con){
                mFinal=con-total;
                total=con;
            }else{
                total+=m;
                mFinal=m;
            }
            if(total+y>con){
                yFinal=con-total;
                total=con;
            }else{
                total+=y;
                yFinal=y;
            }
            if(total+k>con){
                kFinal=con-total;
                total=con;
            }else{
                total+=k;
                kFinal=k;
            }
            printf("Case #%i: %i %i %i %i\n",l+1,cFinal,mFinal,yFinal,kFinal);
        }else{
            printf("Case #%i: IMPOSSIBLE\n",l+1);
        }
        
    }
}