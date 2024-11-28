#include<stdio.h>
int main(){
	
	int number[5]={0,2,5,6,9},doDai;
	for(int i=0;i<5;i++){
		printf("array[%d]=%d\n", i,number[i]);
	}
	doDai=sizeof(number)/sizeof(number[0]);
	printf("do dai cua mang la %d ", doDai);
	
	
	return 0;
}
