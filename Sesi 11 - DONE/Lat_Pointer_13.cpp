#include <stdio.h>
main()
{
    int z = 20, s = 30;
    int *pz, *ps;

    pz = &z;
    ps = &s;

    *pz += *ps;
    printf("z = %d\n", z);

    printf("s = %d\n", s);
}