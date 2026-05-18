// Compute quotient and remainder
// Tính thương và số dư

#include <stdio.h>

int main()
{
    int dividend, divisor, quotitent, remainder; //Khai báo các biến như đề bài
    scanf("%d%d", &dividend, &divisor);
    quotitent = dividend / divisor; // dấu "/" Tính chia lấy phần bên trái. Vd kq chia là 3.5 thì sẽ lấy 3
    remainder = dividend % divisor;// Dấu "%" Tính chia lấy phần bên trái. Vd kq chia là 3.5 thì sẽ lấy 5
    printf("%d %d", quotitent, remainder);
    return 0;
}