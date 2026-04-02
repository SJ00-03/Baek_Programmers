#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[1000001];
    
    fgets(str, sizeof(str), stdin);

    int i = 0, cnt = 0;

    while(str[i] != '\0')
    {
        if(i == 0 && (str[i] != ' ' && str[i] != '\n'))
        {
            cnt++;
        }
        else if(str[i] == ' ' && (str[i+1] != ' ' && str[i+1] != '\n' && str[i+1] != '\0'))
        {
            cnt += 1;
        }
        i++;
    }

    printf("%d\n", cnt);
    
    return 0;
}