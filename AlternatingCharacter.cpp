#include<stdio.h>
#include<string.h>
int main(){
	
	int n=0,del=0,len=0;
	char string[100002],character;
	
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%s",string);
		del=0,character=NULL;
		len=strlen(string);
		for(int i=0;i<len;i++){
			if(character==string[i]){
				del++;
				continue;
			}
			character=string[i];
		}
		printf("%d\n",del);
	}
}
