#include <stdio.h>
void printer(int n, int nums[]);
void main()
{
    int x = 0, n = 8, temp = 0;
    int nums[8] = {6, 3, 8, 5, 2, 7, 4, 1};
    while (x < n)
    {
        int min = x;
        temp = nums[x];
        for (int y = x + 1; y < n; y++)
        {
            if (nums[y] < nums[min])
            {
                min = y;
            }
        }
        nums[x] = nums[min];
        nums[min] = temp;
        x++;
    }
    printer(n, nums);
}

void printer(int n, int nums[])
{
    for (int i = 0; i < n; i++)
    {
        printf("%i ",nums[i]);
    }
}
