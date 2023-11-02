#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--){
	    int k,x,remain;
	    scanf("%d%d",&k,&x);
	    remain=7*k-x;
	    printf("%d\n",remain);
	}
	return 0;
}

