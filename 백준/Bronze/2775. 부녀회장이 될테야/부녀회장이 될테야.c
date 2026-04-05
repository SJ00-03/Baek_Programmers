#include <stdio.h>

int main(void)
{
    int test_case;
    scanf("%d", &test_case);

    int i;
    int j;
    int T;
    int floor;
    int room_number;


    for(T = 0; T < test_case; T++)
    {
        scanf("%d", &floor);
        scanf("%d", &room_number);
        int arr[room_number];

        for(i = 0; i < room_number; i++)
        {
            arr[i] = i+1;
        }

        for(j = 0; j < floor; j++)
        {
            for(i = 1; i < room_number; i++)
            {
                arr[i] = arr[i-1] + arr[i];
            }
        }
        printf("%d\n", arr[room_number-1]);
    }
    
}