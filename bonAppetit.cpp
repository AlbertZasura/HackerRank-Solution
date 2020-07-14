#include<stdio.h>

int main(){
	
	int n=0,k=0,bCharged=0,bActual=0,cost=0,totalCost=0;
	
	scanf("%d %d",&n,&k);
	for(int i=0;i<n;i++){
		scanf("%d",&cost);
		if(i!=k){
			totalCost+=cost;
		}
	}
	scanf("%d",&bCharged);
	bActual = totalCost/2;
	
	if(bActual<bCharged){
		printf("%d\n",bCharged-bActual);
	}else{
		printf("Bon Appetit\n");
	}
	
	return 0;
}
