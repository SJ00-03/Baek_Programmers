// str[i+1]가 문자일 때만 count하는 곳에서 포함하지 않는 조건이 있었음 
/* 지피티가 짜준 더 간결한 코드
  while(str[i] != '\0')
    {
        if(str[i] != ' ' && str[i] != '\n' && (i == 0 || str[i-1] == ' '))
        {
            cnt++;
        }
        i++;
    }
*/
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
