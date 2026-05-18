#include <stdio.h>

// Write a program to convert a time value from hours to minutes and seconds.
// Hãy viết chương trình chuyển đổi giá trị thời gian từ giờ sang phút và giây.
int main()
{
    float hours, mins, secs; // Khai báo biến giờ
    scanf("%f", &hours);     // Nhập giờ
    mins = hours * 60; //Tính phút
    secs = hours * 3600; // Tính giây
    printf("%.1f %.1f", mins, secs);
    return 0;
}