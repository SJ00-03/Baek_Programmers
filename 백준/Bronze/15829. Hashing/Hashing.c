#include <stdio.h>
#include <math.h>

int main(void)
{    
    int L;
    scanf("%d", &L);

    char str[L+1];
    scanf("%s", str);
    
    int i;
    long long M = 1234567891;
    long long hashing = 0;
    long long r = 1;
    for(i = 0; i < L; i++)
    {
        hashing += ((str[i] - 'a' + 1) * r) % M;
        hashing = hashing % M;
        r = (r * 31) % M;
    }
    printf("%lld\n", hashing % M);

    return 0;
}

