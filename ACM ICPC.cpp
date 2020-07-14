#include<stdio.h>

int main(){
	
	int attend=0,subject=0,know=0,max=0,count=0;
	char string[502][502];
	
	scanf("%d %d",&attend,&subject);
	for(int i=0;i<attend;i++){
		scanf("%s",string[i]);
	}
	
	for(int i=0;i<attend;i++){
		for(int j=i;j<attend;j++){
			know=0;
			for(int k=0;k<subject;k++){
				if(string[i][k]=='1' || string[j][k]=='1'){
					know++;
				}
			}
			if(max<know){
				max=know;
				count=1;
			}else if(max==know){
				count++;
			}
		}
	}
	printf("%d\n%d\n",max,count);
	
	return 0;
}
