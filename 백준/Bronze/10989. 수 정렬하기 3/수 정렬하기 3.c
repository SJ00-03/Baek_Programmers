#include <stdio.h>

int main(void)
{
    int N;
    int i, j;
    scanf("%d", &N);
    int number[10000] = {0};
    for(i = 0; i < N; i++)
    {
        int num;
        scanf("%d", &num);
        number[num-1] += 1;
    }

    for(i = 0; i < 10000; i++)
    {
        for(j = 0; j < number[i]; j++)
        {
            printf("%d\n", i+1);
        }
    }
}