#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--){
	    int a,b;
	    scanf("%d%d",&a,&b);
	    if(a<=b){
	        printf("%d\n",7-b);
	    }
	    else if(a>=b){
	        printf("%d\n",7-a);
	    }
	}
	return 0;
}

