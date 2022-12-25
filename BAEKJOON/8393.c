#include <stdio.h>

int main(void)
{
    int num1;
    int sum = 0;
    
    scanf("%d", &num1);

    for(int i = 1; i <= num1; i++)
        sum += i;
    
    printf("%d", sum);
    return 0;
}