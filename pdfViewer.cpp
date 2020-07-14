#include<stdio.h>
#include<string.h>

int main(){
	
	int len=0,height[200]={0},max=0;
	char string[11];
	
	for(int i=97;i<123;i++){
		scanf("%d",&height[i]);
	}
	scanf("%s",string);
	len = strlen(string);
	
	for(int i=0;i<len;i++){
		if(max<height[string[i]]){
			max=height[string[i]];
		}
	}
	printf("%d\n",len*max);
	return 0;
}
