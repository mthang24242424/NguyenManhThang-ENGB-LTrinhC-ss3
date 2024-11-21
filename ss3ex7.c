#include <stdio.h>

int main() {
    int num, sum;

    printf("Moi ban nhap vao so nguyen 4 chu so: ");
    scanf("%d", &num);

    sum = (num / 1000) + ((num / 100) % 10) + ((num / 10) % 10) + (num % 10);

    printf("tong cac so trong so vua nhap la: %d\n", sum);

    return 0;
}
