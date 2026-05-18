#include <stdio.h>

// Calculate simple interestx
// Tính lãi suất đơn giản
int main()
{
    float principle, rate, time; 
    scanf("%f%f%f", &principle, &rate, &time);
    float interest = (principle * rate * time) / 100; //Công thức đề bài cho
    printf("%.1f", interest);
    return 0;
}