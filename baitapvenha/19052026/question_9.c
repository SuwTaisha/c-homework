#include <stdio.h>
// Swap two integer values using a temporary variable

// Hoán đổi hai giá trị số nguyên bằng cách sử dụng một biến tạm thời.
int main()
{
    int a, b, temp; //Khai báo 3 biến a,b và 1 biến tạm thời
    scanf("%d%d", &a, &b);
    temp = a; //Gán giá trị biến tạm thời bằng a
    a = b; //Thay đổi giá trị của a thành giá trị của b
    b = temp; //Thay đổi giá trị của b thành giá trị của a đã lưu vào biến tạm trước đó => đã hoán đổi
    printf("%d %d", a, b);
    return 0;
}