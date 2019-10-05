#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, i, diferenca, volta;

    scanf("%d", &x);
    scanf("%d", &y);

    diferenca = y-x;

    volta = y/diferenca;

        printf("%d\n", volta+1);

    return 0;
}
