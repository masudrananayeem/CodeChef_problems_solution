#include <stdio.h>

int main(void) {
    int x,a,b,cost;
    scanf("%d\n",&x);
    scanf("%d%d",&a,&b);
    cost=a+b;
    if(x>=cost){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
	return 0;
}

