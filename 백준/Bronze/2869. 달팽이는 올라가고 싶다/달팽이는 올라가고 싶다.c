#include <stdio.h>
int main(void)
{
    int A, B, V;
    scanf("%d %d %d", &A, &B, &V);
    int how_many_days;
    if((V-A) % (A-B) != 0)
    {
        how_many_days = (V-A) / (A-B) + 2; // 나머지가 0이 아니면 하루가 더 필요함
    }
    else how_many_days = (V-A) / (A-B) + 1;
    

    printf("%d\n", how_many_days);
}
