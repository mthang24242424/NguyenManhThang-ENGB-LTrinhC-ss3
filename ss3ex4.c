#include<stdio.h> 
int main(){
	float diemVan, diemToan, diemAnh;
	printf("Diem van, toan, anh cua ban lan luot la: ");
	scanf("%f %f %f",&diemVan, &diemToan, &diemAnh);
	float tongDiem = diemVan + diemToan + diemAnh;
	float diemTrungBinh = tongDiem / 3; 
	printf("Tong diem cua ban la %f - Diem trung binh la %f", tongDiem, diemTrungBinh);
	return 0; 
	
} 
