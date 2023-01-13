#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int age;
    char name[101];
    int idx;
}member;

int Compare(const void* first, const void* second)
{
    member* elem1 = (member*) first;
    member* elem2 = (member*) second;

    if(elem1->age > elem2->age)
        return 1;
    else if(elem1->age < elem2->age)
        return -1;
    else
    {
        if(elem1->idx > elem2->idx)
            return 1;
        else
            return -1;
    }
}
int main(void)
{
    int n;
    scanf("%d", &n);
    member group[n];

    for(int i = 0; i < n; i++){
        scanf("%d %s", &group[i].age, &group[i].name);
        group[i].idx = i;
    }
    qsort(group, n, sizeof(member), Compare);

    for(int i = 0; i < n; i++)
        printf("%d %s\n", group[i].age, group[i].name);
    
    return 0;
}