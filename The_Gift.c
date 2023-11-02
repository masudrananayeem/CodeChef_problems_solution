#include <stdio.h>

int main(void) {
    int x,n,m;
    scanf("%d%d%d",&x,&n,&m);
    if(n<=m+x){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
	return 0;
}

