#include <stdio.h>

int Fibo(int n)
{
    if(n >= 2)
        return Fibo(n-1) + Fibo(n-2);
    else if(n == 1)
        return 1;
    else    
        return 0;
}
int main(void)
{
    int n;
    scanf("%d", &n);

    printf("%d", Fibo(n));

    return 0;
}