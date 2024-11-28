#include<stdio.h>
int main(){
	
	int number[5];
	for(int i=0;i<5;i++){
		printf("moi ban nhap so ");
		scanf("%d", &number[i]);
	}
	for(int i=0;i<5;i++){
		printf("number[%d]= %d\n", i,number[i]);
	}
	
	return 0;
}
