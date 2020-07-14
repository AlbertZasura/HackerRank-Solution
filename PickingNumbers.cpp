#include<stdio.h>

int main(){
	
	int n=0,a=0,max=0,sum=0,output=0,turn=0;
	int count[101]={0};
	
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a);
		if(max<a){
			max=a;
		}
		count[a]++;
	}
	for(int i=1;i<=max;i++){
		if(turn==2){
			turn=1;
			sum-=count[i-2];	
		}
		sum+=count[i];
		turn++;
		if(output<sum){
			output=sum;
		}
	}
	
	printf("%d\n",output);
	
	
	return 0;
	
}
