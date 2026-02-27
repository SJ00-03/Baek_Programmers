#include <stdio.h>


int main(void)
{
    char str[81];
    int repeat;
    int i;
    
    int sum = 0;
    
    scanf("%d", &repeat);
    
    
    for(i = 0; i < repeat; i++)
    {
        int cnt = 0;
        sum = 0;
        int j = 0;
        scanf("%s", str);
         while(str[j] != '\0')
        {
            if(str[j] == 'O')
            {
                cnt += 1;
                sum += cnt;
            }
            else if(str[j] == 'X')
            {                
                cnt = 0;
            }
            j++;
        }
        printf("%d\n", sum);        
    }
   
}