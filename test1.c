#include <stdio.h>

int main(void) {
    int **pp;
    int *p;
    int a = 100;

    /* ppにpを指させる */
    pp = &p;

    /* pにaを指させる */
    p = &a; /* *pp = &a でも良い */

    /* pの指すアドレスの値を表示 */
    printf("a    %d\n", a);
    printf("&a   %p\n", &a);
    printf("p    %p\n", p);
    printf("&p   %p\n", &p);
    printf("pp   %p\n", pp);
    printf("&pp  %p\n", &pp);
    printf("**pp %d\n", **pp);

    return 0;

}