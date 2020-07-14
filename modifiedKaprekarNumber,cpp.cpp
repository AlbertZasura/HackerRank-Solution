#include<stdio.h>

int main(){
	
	unsigned long long int low=0,upper=0,space=0,digit=0,sum=0,kapNumber=0,lastPart=0;
	unsigned long long int firstPart=0,temp=0;
	
	scanf("%llu",&low);
	scanf("%llu",&upper);
	
	for(long long int i=low;i<=upper;i++){
		if(i==0){
			printf("0");
			space++;
			continue;
		}
		
		sum=i*i;
		kapNumber=sum;
		digit=1;
		while(kapNumber>0){
			digit++;
			temp=kapNumber%10;
			kapNumber/=10;
		}
		kapNumber=sum;
		lastPart=1;
		for(int j=0;j<(digit/2);j++){
			lastPart*=10;
			kapNumber/=10;
		}
		firstPart=kapNumber;
		lastPart=sum%lastPart;
		if((firstPart+lastPart)==i){
			if(space>0){
				printf(" ");
			}
			printf("%llu",i);
			space++;
		}else{
			continue;
		}
	}
	if(space==0){
		printf("INVALID RANGE");
	}
	printf("\n");
	
	return 0;
}
