#include<stdio.h>

int main(){
	
	int n=0,k=0,firstNumber=0,divisible=0;
	int ar[101];
	
	scanf("%d %d",&n,&k);
	for(int i=0;i<n;i++){
		scanf("%d",&ar[i]);
		firstNumber=ar[0];
		if(i!=0 && (firstNumber+ar[i])%k==0){
			divisible++;
		}
	}
	
	for(int i=1;i<n;i++){
		for(int j=i+1;j<n;j++){
			if((ar[i]+ar[j])%k==0){
				divisible++;
			}	
		}
	}
	printf("%d\n",divisible);
	
	
	return 0;
}
