#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--){
	    int x,y,i;
	    scanf("%d%d",&x,&y);
	    i=2*y;
	    if(x>=i){
	        printf("YES\n");
	    }
	    else{
	        printf("NO\n");
	    }
	}
	return 0;
}

