#include<stdio.h>

int main(){
	int i = 0, sum = 0, count = 1 ;
	scanf("%d",&i);
	while(i != 0){
		sum += i;
		scanf("%d",&i);
		count++;
	}
	printf("Sum is %d, Aver is %.1f",sum, 1.0*sum/(count-1));
}
