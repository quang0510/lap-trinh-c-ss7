#include<stdio.h>
int main(){
	
	int number[5]={1,5,7,11,9}, count=0;
	for(int i=0;i<5;i++){
		if(number[i]%2==0){
			count++;
			printf("cac so chan la : %d\n ",number[i]);
			
		}
	}
	if(count==0){
		printf("mang khong chua so chan");
	}
	
	return 0;
}
