#include <stdio.h>

// Calculate the average of three real numbers
// Tính trung bình cộng của ba số thực
int main()
{
    float a, b, c; //Khai báo biến 3 số
    scanf("%f%f%f", &a, &b, &c); //Nhập biến 3 số
    float average = (a+b+c)/3; //Trung bình cộng ba số
    printf("%.1f", average); 
    return 0;
}