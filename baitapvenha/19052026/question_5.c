#include <stdio.h>

// Convert kilometers to meters and centimeters
// Chuyển đổi ki-lô-mét sang mét và centimet
int main()
{
    float kilometers; //Khai báo biến kilomet
    scanf("%f", &kilometers); //Nhập Kilomet
    float meters, centimeters; //Khai báo biến mét và centimet
    meters = kilometers * 1000; //Tính mét theo công thức
    centimeters = kilometers * 100000; //Tính centimet theo công thức
    printf("%.1f %.1f", meters, centimeters);
    return 0;
}