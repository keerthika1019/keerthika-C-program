#include <stdio.h>
int main()
{
    int a, b, choice, result;
    scanf("%d %d",&a,&b);
    scanf("%d", &choice);
    switch(choice) {
        case 1:
        result = a+b;
        printf("Result = %d",result);
        break;

        case 2:
        result = a-b;
        printf("Result = %d",result);
        break;

        case 3:
        result = a*b;
        printf("Result = %d", result);
        break;

        case 4:
        result = a/b;
        printf("Result = %d", result);
    }
    return 0;
}