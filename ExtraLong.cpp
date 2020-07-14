#include<stdio.h>


#define MAX 500
int result[MAX];

int resultSize;

void multiply(int x){
	int carry=0;
	for(int i=0;i<resultSize;i++){
		int prod = result[i] * x + carry;
		result[i]=prod%10;
		carry = prod/ 10;
	}
	
	while(carry!=0){
		result[resultSize] = carry % 10;
		carry=carry / 10;
		resultSize++;
	}
}

void factorial(int n){
	result[0]=1;
	resultSize=1;
	
	for(int x=2;x<=n;x++){
		multiply(x);
	}
	
	for(int i=resultSize-1; i>=0; i--){
		printf("%d",result[i]);
	}
	printf("\n");
}

int main(){
	
	int n=0;
	scanf("%d",&n);
	factorial(n);	
	
	return 0;
}
