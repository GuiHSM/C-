#include <iostream>

using namespace std;

int main()
{
    int t;
    scanf("%i",&t);
    for(int i=0;i<t;i++){
        int n,k1,k2;
        scanf("%i%i%i",&n,&k1,&k2);
        int l1=n-k1;
        int l2=n-k2;
        int w,b;
        scanf("%i%i",&w,&b);
        if(w<=(k1+k2)/2&&b<=(l1+l2)/2){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }

    return 0;
}
