#include<stdio.h>

int main(){
	
	int t=0,money=0,cost=0,m=0,get=0,wrapper=0;
	
	scanf("%d",&t);
	for(int i=0;i<t;i++){
		scanf("%d %d %d",&money,&cost,&m);
		get=money/cost;
		wrapper=get;
		while(wrapper>=m){
			get+=(wrapper/m);
			wrapper=(wrapper/m)+(wrapper%m);
		}
		printf("%d\n",get);
		
	}
	
	return 0;
}
