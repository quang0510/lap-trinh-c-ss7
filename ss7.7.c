#include<stdio.h>
int main(){
	
	int a;
	printf("moi ban nhap so ky tu trong chuoi ");
	scanf("%d", &a);
	int number[a];
	for(int i=0;i<a;i++){
		printf("number[%d]=",i);
		scanf("%d",&number[i]);
		if(number[i]%2==0){
			printf("vui long nhap so le ");
			printf("number[%d]=",i);
		    scanf("%d",&number[i]);
		
		}
	}
	
	
	return 0;
}
