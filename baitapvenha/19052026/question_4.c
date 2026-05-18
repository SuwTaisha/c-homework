#include <stdio.h>

//Convert Celsius to Fahrenheit
//Đổi độ c sang độ F

int main() {
    float celsius; // Khai báo biến độ c
    scanf("%f", &celsius); // Nhập biến độ C
    float f = celsius * (9 / 5) + 32; // Tính theo công thức
    printf("%.2f", f);
    return 0;
}