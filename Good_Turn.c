#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int sum[n];
    for(int i=0;i<n;i++){
        int a,b;
        scanf("%d%d",&a,&b);
        sum[i]=a+b;
        
    }
    for(int i=0;i<n;i++){
        if(sum[i]>6){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
}