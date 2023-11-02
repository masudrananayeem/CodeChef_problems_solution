#include <stdio.h>

int main(void) {
	int n;
	scanf("%d",&n);
	int data[n];
	for(int i=0 ;i<n;i++){
	    int a;
	    scanf("%d",&a);
	    data[i]=a;
	}
	for(int i=0;i<n;i++){
	    if(data[i]>30){
	        printf("YES\n");
	    }
	    else{
	        printf("NO\n");
	    }
	}
	return 0;
}

