#include<stdio.h>

int main(){
	float doC, doF;
	printf("moi ban nhap vao nhiet do theo do C: ");
	scanf("%f",&doC);
	doF = doC*1.8+32;
	printf("nhiet do F la: %.2f",doF);
	return 0; 
} 
