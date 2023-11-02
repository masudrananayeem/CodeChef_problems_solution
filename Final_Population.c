#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--){
	    int x,y,z,l,i;
	    scanf("%d%d%d",&x,&y,&z);
	    l=x-y;
	    i=l+z;
	    printf("%d\n",i);
	}
	return 0;
}

