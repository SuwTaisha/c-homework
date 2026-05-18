#include <stdio.h>


//Write a program to calculate the area and perimeter of a rectangle.
//Viết chương trình để tính diện tích và chu vi của hình chữ nhật.
int main() {
    float length, width; //Khai báo các biến chiều dài & rộng

    scanf("%f%f", &length, &width); //Nhập  chiều dài chiều rộng

    float perimeter = 2 * (length + width); // Chu vi
    float area = length * width; // diện tích

    printf("%.1f %.1f", perimeter, area); 
    return 0;
}