#include<stdio.h>
int main(){
	
	int number[5]={1,3,4,6,9};
	int max=number[1];
	int min=number[2];
	for(int i=0;i<5;i++){
		if(max<number[i]){
			max=number[i];
		}else if(min>number[i]){
			min=number[i];
		}
	}
	printf("so lon nhat la %d\n ", max);
	printf("so nho nhat la %d ", min);
	return 0;
}
