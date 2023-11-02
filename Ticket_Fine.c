#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--){
	    int a,p,q;
	    scanf("%d%d%d",&a,&p,&q);
	    if(p==q){
	        printf("0\n");
	    }
	    else if(p>q){
	        printf("%d\n",a*(p-q));
	    }
	}
	return 0;
}

