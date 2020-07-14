#include<stdio.h>

int main(){
	
	int n=0,count=0;
	int c[101]={0};
	
	scanf("%d\n",&n);
	for(int i=0;i<n;i++){
		c[i]=0;
		scanf("%d",&c[i]);
	}
	
	for(int i=0;i<n;i++){
		if(c[i]==0){
			if(c[i+2]!=1 && (i+2)<n){
				count++;
				i+=1;
				continue;
			}
			count++;
		}
	}

	printf("%d\n",count-1);
	return 0;
	
}
