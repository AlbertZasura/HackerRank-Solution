#include<stdio.h>
#include<string.h>

int main(){
	
	char string[101];
	long long int temp=0,n=0,count=0,value=0,more=0,length=0;
	
	scanf("%s",string);
	scanf("%lld",&n);
	length=strlen(string);
	count=0;

	for(int i=0;i<length;i++){
		if(string[i]=='a'){
			count++;
		}
	}
	value=n/length;
	count*=value;
	
		more=(value*length);
		temp=(n-more);
		for(int j=0;j<temp;j++){
			if(string[j]=='a'){
				count++;
			}
		}
	printf("%lld\n",count);
	
	return 0;
}
