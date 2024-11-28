#include<stdio.h>
int main(){
	int a, b;
	printf("moi ban nhap vao so hang");
	scanf("%d", &a);
	printf("moi ban nhap vao so cot");
	scanf("%d", &b);
	int number[a][b];
	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			printf("moi ban nhap cac phan tu");
			scanf("%d", &number[i][j]);
		}
	}
	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			printf("number[%d][%d]=%d\n", i, j, number[i][j]);
		}
	}
	
	return 0;
}
