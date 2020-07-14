#include<stdio.h>
int main(){
	
	int n=0;
	int s[101],value=0;
	int d=0,m=0,portion=0,countM=0;
	
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&s[i]);
	}
	scanf("%d %d",&d,&m);
	
	for(int i=0;i<n;i++){
		value+=s[i];
		countM++;
		if(countM==m && value!=d){
			countM--;
			value-=s[i-(m-1)];
		}else if(countM==m && value==d){
			countM--;
			value-=s[i-(m-1)];
			portion++;
		}
		
	}
	printf("%d\n",portion);
	
	
	
	return 0;
}
