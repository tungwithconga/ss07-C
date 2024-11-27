#include <stdio.h>
int main(){
	int array[5];
	for(int i=0;i<=4;i++){
		printf("Hay nhap vao phan tu array[%d]:",i);
		scanf("%d",&array[i]);
	}
	for(int i=0;i<=4;i++){
		printf("Phan tu so array[%d] : %d\n",i,array[i]); 
	} 
}
