#include<stdio.h>
int main(){
	
	int n=0,pair=0;
	int count[101]={0},ar=0;
	
	
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&ar);
		count[ar]++;
		if(count[ar]==2){
			count[ar]=0;
			pair++;
		}
	}
	printf("%d\n",pair);
}
