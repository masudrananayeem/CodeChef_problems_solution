#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--){
	    int x,y,m;
	    scanf("%d%d",&x,&y);
	    m=x*5;
	    if(m>=y){
	        printf("YES\n");
	    }
	    else{
	        printf("NO\n");
	    }
	}
	return 0;
}

