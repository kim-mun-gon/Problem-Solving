#include <stdio.h>

int main(void)
{
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    if(a == b && b == c)
        printf("%d", 10000 + a * 1000);
    else if(a==b && a != c)
        printf("%d", 1000+a*100);
    else if(a==c && a != b)
        printf("%d", 1000+a*100);
    else if(b==c && b != a)
        printf("%d", 1000+b*100);
    else 
    {
        if(a > b && a > c)
            printf("%d", a*100);
        else if(b > a && b > c)
            printf("%d", b*100);
        else if(c > a && c > b)
            printf("%d", c*100);
    }

    return 0;
}

// a,b,c 가 100일 때
// a == b == c 이런 연쇄비교는 적용이 안된다. a==b==c는 실제로 (a==b)==c로 성립이 된다.
// (a==b)는 100 == 100이므로 참으로 1이 된다. 이후 c의 값과 비교하면 1 != 100 이 다르므로 0 거짓이 된다.
