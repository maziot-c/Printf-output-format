#include <stdio.h>

int main()
{
    int a               = 1;
    unsigned int b      = 1;

    printf("int a               = 1; \t%d\n", a);
    printf("unsigned int b      = 1; \t%u\n", b);

    short c             = 1;
    unsigned d          = 1;

    printf("short c             = 1; \t%d\n", c);
    printf("unsigned d          = 1; \t%u\n", d);

    char e              = 1;
    signed char f       = 1;
    unsigned char g     = 1;

    printf("char e              = 1; \t%d\n", e);
    printf("signed char f       = 1; \t%d\n", f);
    printf("unsigned char g     = 1; \t%u\n", g);

    float h             = 1.1;
    double i            = 1.1;

    printf("float h             = 1.1; \t%f\n", h);
    printf("double i            = 1.1; \t%lf\n", i);

    long j              = 1;
    unsigned long k     = 1;

    printf("long j              = 1; \t%ld\n", j);
    printf("unsigned k          = 1; \t%lu\n", k);

    short m             = 1;
    unsigned short n    = 1;

    printf("short m             = 1; \t%d\n", m);
    printf("unsigned short n    = 1; \t%u\n", n);

    return 0;
}

