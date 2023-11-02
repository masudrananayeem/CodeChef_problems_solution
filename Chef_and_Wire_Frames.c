#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long int x,y,z,sum,cost;
        scanf("%lld%lld%lld",&x,&y,&z);
        sum=2*x+2*y;
        cost=sum*z;
        printf("%lld\n",cost);
        
    }
    return 0;
}