#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--){
	    int n,x,k,buy;
	    scanf("%d%d%d",&n,&x,&k);
	    buy=k/x;
	    if(n<=buy){
	        printf("YES\n");
	    }
	    else{
	        printf("NO\n");
	    }
	}
	return 0;
}

