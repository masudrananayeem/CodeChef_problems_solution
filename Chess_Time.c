#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--){
	    int h,a,b;
	    scanf("%d",&h);
	    a=h*60;
	    b=a/20;
	    printf("%d\n",b);
	}
	return 0;
}

