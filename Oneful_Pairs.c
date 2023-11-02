#include <stdio.h>

int main(void) {
	int a,b,c;
	scanf("%d%d",&a,&b);
	c=a+b+(a*b);
	if(c==111){
	    printf("YES");
	    
	}
	else {
	    printf("NO");
	}
	return 0;
}

