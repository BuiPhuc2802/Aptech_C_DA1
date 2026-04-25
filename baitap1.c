#include <stdio.h>

int main(){
    /*
    Viết chtr nhập vào 1 số nguyên, ktra xem là số chẵn hay lẽ
    Nếu là số 0 thì in ra ko chẵn ko lẽ
    */
   long long a;
   printf("Vui long nhap vao 1 so nguyen bat ky: ");
   scanf("%lld", &a);

    if (a == 0){
        printf("Số đã nhập ko chẵn ko lẽ!!!");
    } else if (a % 2 == 0){
        printf("%lld là số chẵn!", a);
    } else {
        printf("%lld là số lẻ!", a);
    }
}