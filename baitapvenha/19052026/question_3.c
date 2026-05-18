#include <stdio.h>
#define pi 3.14 // Khai báo hằng pi

// Calculate the area and perimeter of a rectangle
// Tính diện tích và chu vi của hình chữ nhật.
int main()
{
    float radius;  // Khai báo biến bán kính
    scanf("%f", &radius); // Nhập bán kính

    float circumference = pi * (radius * 2); // Chu vi hình tròn tính theo công thức
    float area = radius * radius * pi; // Diện tích...
    printf("%.2f %.2f", circumference, area); 

    return 0;
}