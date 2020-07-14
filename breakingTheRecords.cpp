#include<stdio.h>


int main(){
	int game=0,score=0,countMin=0,countMax=0;
	int min,max;
	
	scanf("%d",&game);
	for(int i=0;i<game;i++){
		scanf("%d",&score);
		if(i==0){
			max=score;
			min=score;
		}
		if(score>max){
			max=score;
			countMax++;
		}
		if(score<min){
			min=score;
			countMin++;
		}
	}
	printf("%d %d\n",countMax,countMin);
}
