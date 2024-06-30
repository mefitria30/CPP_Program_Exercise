#include <stdio.h>

main()
{
    int i, j;
    int huruf_A[8][8] = {
        {0, 1, 1, 1, 1, 1, 0, 0},
        {0, 1, 0, 0, 0, 1, 0, 0},
        {0, 1, 0, 0, 0, 1, 0, 0},
        {1, 1, 1, 1, 1, 1, 1, 0},
        {1, 1, 0, 0, 0, 0, 1, 0},
        {1, 1, 0, 0, 0, 0, 1, 0},
        {1, 1, 0, 0, 0, 0, 1, 0},
        {0, 0, 0, 0, 0, 0, 0, 0}};

    char text = '|';

    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 8; j++)
            if (huruf_A[i][j] != 0)
                // putchar('\xDB\n');
                putchar(text);
            else
                putchar(' '); /* spasi */
        putchar('\n');
    }

    return 0;
}