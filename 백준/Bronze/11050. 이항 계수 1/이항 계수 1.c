#include <stdio.h>
int main(void)
{
    int N, K;
    scanf("%d %d", &N, &K);

    int numerator = 1;
    int denominator_1 = 1;
    int denominator_2 = 1;
    int result;
    int i;
    int a = N-K;

    for(i = N; i > 0; i--)
    {
        numerator *= N;
        N--;
    }
    for(i = K; i > 0; i--)
    {
        denominator_1 *= K;
        K--;
    }
    for(i = a; i > 0; i--)
    {
        denominator_2 *= a;
        a--;
    }
    result = numerator / (denominator_1*denominator_2);
    
    
    printf("%d\n", result); 
}