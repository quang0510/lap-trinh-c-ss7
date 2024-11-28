#include<stdio.h>
int main(){
	
	int a;
	printf("moi ban nhap ");
	scanf("%d", &a);
	int number[a];
	for(int i=0;i<a;i++){
		printf("number[%d]= ", i);
		scanf("%d",&number[i]);
	}
	
	return 0;
}
