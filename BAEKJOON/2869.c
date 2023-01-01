#include <stdio.h>

int main(void)
{
    int A, B, V;
    
    scanf("%d %d %d", &A, &B, &V);

    V -= A;
    if(V % (A - B) == 0)
    {
        printf("%d", V / (A-B) + 1);
    }
    else
        printf("%d", V / (A-B) + 2);

    return 0;
}