#include<stdio.h>
#include<string.h>
int main(){
	
	int number=0,flag=0;
	int n=0,len=0,temp=0,divisible=0;
	
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		divisible=0,temp=0;
		scanf("%d",&number);
		flag=number;
		while(flag>0){
			temp=(flag%10);
			if(temp==0){
				flag/=10;
				continue;	
			}
			temp=number%temp;
			if(temp==0){
				divisible++;
			}
			flag/=10;
			
		}
		printf("%d\n",divisible);
	}
	
	return 0;
}
