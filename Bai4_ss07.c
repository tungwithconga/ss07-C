#include <stdio.h>
int main(){
	int n;
	printf("Hay nhap so phan tu 1 mang ma ban muon:");
	scanf("%d",&n);
	int array[n];
	for(int i=0;i<(sizeof(array)/sizeof(array[0]));i++){
		printf("Hay nhap vao phan tu array[%d]:",i);
		scanf("%d",&array[i]); 
	} 
} 
