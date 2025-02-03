#include <stdio.h>
#include <stdbool.h>

int main()
{
    int arr[6] = {18, 20, 5, 3, 2, 1};
    int temp[] = {};
    int count = 0;
    bool leader = false;
    for (int i = 0; i < 6; i++)
    {
        for (int j = i + 1; j < 6; j++)
        {
            if (arr[i] > arr[j])
            {
                leader = true;
                break;
            }
            else
            {
                leader = false;
                break;
            }
        }
        if (leader)
            {
                temp[count] = arr[i];
                count++;
                leader = false;
            }
    }
    for (int i = 0; i < count; i++)
    {
        printf("%d ", temp[i]);
    }
}