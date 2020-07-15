#include<stdio.h>

int main(){
	int x=0,y=0,count=0,result=0;
	int arr[7][7];
	
	for(int i=0;i<6;i++){
		for(int j=0;j<6;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	
	while(x!=4){
		if(x==3 && y==4)break;
		if(y==4 && x!=4){
			y=0;
			x++;
		}
		for(int i=0;i<3;i++){
			if(i==1){
				count+=arr[x+i][y+1];
			}else{
				for(int j=0;j<3;j++){
				count+=arr[x+i][y+j];
				}
			}
		}
		if(x==0 && y==0)result=count;
		if(result<count)result=count;
		count=0;
		if(y!=4)y++;	
	}
	printf("%d\n",result);
	
	return 0;
}
