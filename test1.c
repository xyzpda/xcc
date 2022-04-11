#include <stdio.h>

int main(void) {
    int **pp;
    int *p;
    int a = 100;

    /* ppにpを指させる */
    pp = &p;

    /* pにaを指させる */
    p = &a; /* *pp = &a でも良い */

    /* 
    pp -> p -> a
    pp = p のアドレス
    p = a のアドレス
    a = 100
    */

    printf("&a   %p\n", &a);
    printf("p    %p\n", p);
    printf("*pp  %p\n", *pp);
    printf("&p   %p\n", &p);
    printf("pp   %p\n", pp);
    printf("a    %d\n", a);
    printf("*p   %d\n", *p);
    printf("**pp %d\n", **pp);

    return 0;

}