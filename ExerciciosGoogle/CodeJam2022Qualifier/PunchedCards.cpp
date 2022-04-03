#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    scanf("%i",&t);
    for(int k=0;k<t;k++){
        int r,c;
        scanf("%i%i",&r,&c);
        printf("Case #%i:\n",k+1);
        printf("..+");
        for(int i=0; i<c-1;i++){
            printf("-+");
        }
        printf("\n..|");
        for(int i=0; i<c-1;i++){
            printf(".|");
        }
        printf("\n");
        
        for(int i=1;i<r;i++){
            printf("+");
            for(int i=0; i<c;i++){
                printf("-+");
            }
            printf("\n|");
            for(int i=0; i<c;i++){
                printf(".|");
            }
            printf("\n");
        }
        printf("+");
        for(int i=0; i<c;i++){
            printf("-+");
        }
        printf("\n");
    }
}