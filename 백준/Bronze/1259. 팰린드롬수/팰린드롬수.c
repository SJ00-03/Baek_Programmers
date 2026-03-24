#include <stdio.h>

int yes_or_no(char num[5]);

int main()
{
    while(1)
    {
        char number[5];
        scanf("%s", number);
        int a = yes_or_no(number);

        if(a == 3)
        {
            break;
        }
        else if (a == 1) 
        {
            printf("yes\n");
        }
        else if (a == 0)
        {
            printf("no\n");
        }
        
    }

}

int yes_or_no(char num[5])
{
    
    
    if(num[0] == '0')
    {
        return 3;
    }
    int i = 0;
    while(num[i] != '\0')
    {
        i++;
    }

    i -= 1;

    int j;
    int result;
    for(j = 0; j < i; j++)
    {
        if(num[j] == num[i])
        {
            result = 1;
            i--;
        }
        else
        {
            result = 0;
            break;
        } 
    }

    return result;
   
    
}