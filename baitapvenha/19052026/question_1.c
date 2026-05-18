#include <stdio.h>
#include <stdlib.h>

// Write a program to calculate the sum, difference, product, and quotient of two real numbers.
// Hãy viết chương trình để tính tổng, hiệu, tích và thương của hai số thực.
int main()
{
    float a, b;            // Khai báo hai số thực - Có thể dùng double
    scanf("%f%f", &a, &b); // Cho người dùng nhập a và b;

    float tong, hieu, tich, thuong; // Khai báo các biến để tiện tính
    tong = a + b;
    hieu = a - b;
    tich = a * b;
    thuong = a / b;

    printf("%.1f %.1f %.1f %.1f\n", tong, hieu, tich, thuong); //  1f: lấy 1 số sau dấu chấm

    return 0;
}
