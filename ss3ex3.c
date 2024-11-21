#include<stdio.h>

int main(){
	
float pi = 3.14 ;
float banKinh;

printf(" nhap ban kinh: ");
scanf("%f", &banKinh);

float chuVi =  2*pi*banKinh;
float dienTich = pi*banKinh*banKinh;
printf("chu vi hinh tron la %.2f\n",chuVi); 
printf("dien tich hinh tron la %.2f", dienTich);
return 0; 
} 

