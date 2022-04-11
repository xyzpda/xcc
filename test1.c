#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {

    printf("argc %d\n", argc);
    printf("argv[0] %d\n", atoi(argv[0]));
    printf("argv[1] %d\n", atoi(argv[1]));

    printf("------- \n");

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