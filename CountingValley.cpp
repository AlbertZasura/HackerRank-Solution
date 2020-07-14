#include<stdio.h>

int main(){
	
	int n=0;
	char c[1000002];
	int sealevel=0,count=0;
	scanf("%d",&n);
	scanf("%s",c);
	int before=0;
	
	for(int i=0;i<n;i++){
		if(c[i]=='U'){
			before=sealevel;
			sealevel++;
			
		}else if(c[i]=='D'){
			before=sealevel;
			sealevel--;
		}
		if(sealevel==0 && before<0){
			count++;
		}
	}
	printf("%d\n",count);
	
	return 0;
}
