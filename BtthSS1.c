#include<stdio.h>

int main(){
	// Khai bao bien 
	
	int firstNumber = 10;
	int seconNumber = 5;
	int sum,total,minus;
	float devide;
	
	// Thuc hien phep tinh va in ra ket qua 
	
	sum = firstNumber + seconNumber;
	printf("Ket qua phep tinh tong la %d \n",sum);
	
	total = firstNumber - seconNumber;
	printf("Ket qua phep tinh hieu la %d \n",total);
	
	minus = firstNumber * seconNumber;
	printf("Ket qua phep tinh tich la %d \n",minus);
	
	devide = firstNumber / seconNumber;
    printf("Ket qua phep tinh thuong la %.2f \n", devide);
	
	return 0; 
} 
