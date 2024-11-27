#include <stdio.h>
int main(){
	int length;
	int array[5];
	array[0] = 1;
	array[1] = 2; 
	array[2] = 3;
	array[3] = 4; 
	array[4] = 5; 
 for(int i =0;i<=4;i++){
 	printf("Phan tu so array[%d] = %d\n",i,array[i]);
 }
 length = sizeof(array) / sizeof(array[0]);
 printf("Chieu dai cua mang array la: %d",length);
} 
