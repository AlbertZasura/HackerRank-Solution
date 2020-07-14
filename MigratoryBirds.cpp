#include<stdio.h>
int main(){
	
	int n=0;
	int arr=0,count[6]={0,0,0,0,0,0};
	int output=0,ans=0,total=0;
	
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&arr);
		count[arr]++;
	}
	total=count[1];
	count[1]=0;
	ans=1;
	for(int i=2;i<6;i++){
		if(total<count[i]){
			total=count[i];
			ans=i;
		}
		count[i]=0;
	}
	printf("%d\n",ans);
	return 0;
}
