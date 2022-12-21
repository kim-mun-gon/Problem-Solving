#include <stdio.h>

int main(void)
{
    int num1, num2;
    int first, second, third;

    scanf("%d", &num1);
    scanf("%d", &num2);

    first = (num2%100)%10;
    second = (num2%100)/10;
    third = (num2/100);

    printf("%d\n", num1*first);
    printf("%d\n", num1*second);
    printf("%d\n", num1*third);
    printf("%d", (num1*first)+(num1*second*10) + (num1*third*100));

    return 0;
}