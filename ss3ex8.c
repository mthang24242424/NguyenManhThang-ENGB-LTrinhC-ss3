#include <stdio.h>

int main() {
    int num,nghin,tram,chuc,donVi; 

    printf("Moi ban nhap vao so nguyen 4 chu so: ");
    scanf("%d", &num);

    nghin = num/1000;
	tram = ((num/100)%10);
	chuc = ((num/10)%10);
	donVi = num%10;
	printf("Dao nguoc vi tri cua so vua nhap: %d%d%d%d",donVi,chuc,tram,nghin); 


    return 0;
}
