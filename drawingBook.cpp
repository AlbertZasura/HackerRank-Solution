#include<stdio.h>
int main(){
	
	int n=0,p=0,back=0,front=0;
	
	scanf("%d",&n);
	scanf("%d",&p);
	
	if(p%2==0){
		front=p/2;
		back=n-p;
	}else{
		front=(p-1)/2;
		back=n+1-p;
	}
	back/=2;
	
	
	if(back<front){
		printf("%d\n",back);
	}else{
		printf("%d\n",front);
	}
	
	return 0;
}
