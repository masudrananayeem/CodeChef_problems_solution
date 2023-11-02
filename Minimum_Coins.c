#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--){
	    int x,y;
	    scanf("%d",&x);
	    if(x>10){
	        y=x%10;
	        printf("%d\n",y);
	    }
	    else if(x<10){
	        printf("%d\n",x);
	    }
	    else {
	        printf("0\n");
	    }
	}
	return 0;
}

