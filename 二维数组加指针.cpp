#include<stdio.h>
#include<stdlib.h>

int main()
{
    int arr[3][4];
    int *p = &arr[0][0];
    int i = 0;
    for (i = 0; i < 3 * 4; i++)
    {
        *(p + i) = i;
    }
    for (i = 0; i < 3; i++)
    {
        int j = 0;
        for (j = 0; j < 4; j++)
        {
            printf("%d ", arr[i][j]);
        }
    }
    system("pause");
    return 0;
}
