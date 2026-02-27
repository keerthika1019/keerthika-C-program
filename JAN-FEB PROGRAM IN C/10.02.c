#include <stdio.h>
int main()
{
    int roll, a, b, c;
    int total;
    float average;
    scanf("%d", &roll);
    scanf("%d %d %d", &a,&b,&c);
    total = a+b+c;
    average=total/3.0;
    printf("Roll Number: %d\n", roll);
    printf("Total Marks: %d\n", total);
    printf("Average Marks: %.2f\n", average);
    return 0;
}