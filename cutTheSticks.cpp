#include<stdio.h>

int main(){
	
	int n=0,min=1001,count=0,arr[1002]={0},minus=0;
	
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
		if(min>arr[i]){
			min=arr[i];
		}
	}
	while(min!=1001){
//		printf("min = %d\n",minus);
		minus=min;
		count=0;
		for(int i=0;i<n;i++){
			if(arr[i]!=0){
				arr[i]-=minus;
				count++;
			}
		}
		min=1001;
		for(int i=0;i<n;i++){
			if(arr[i]!=0 && min>arr[i]){
				min=arr[i];
			}
		}
		printf("%d\n",count);
	}
	
	return 0;
}
