/* Program : ptrnama.c
Menukarkan isi 2 string dengan fasilitas pointer */
#include <stdio.h>
#include <string.h>

char *nama1 = "JAMES BOND";
char *nama2 = "HERCULE POIROT";

main()
{
    char *namax;

    puts("SEMULA : ");
    printf("nama1 --> %s\n", nama1);
    /* nama1:pointer yg menunjuk ke string JAMES BOND */ printf("nama2 --> %s\n", nama2);
    /* nama2:pointer yg menunjuk ke string HERCULE POIROT */

    namax = nama1;
    nama1 = nama2;
    nama2 = namax;
    puts("KINI : ");
    printf("nama1 --> %s\n", nama1);
    printf("nama2 --> %s\n", nama2);
}