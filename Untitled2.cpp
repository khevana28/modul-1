#include<stdio.h>
main(){
	int ans;
	int a,b;
	ptintf("enter");
	scanf("%d%d",&a,&b);
	ans=sum(a,b);
	printf("%d",ans);
}
int sum(int c,int d){
	return c+d;
}
