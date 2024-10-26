#include <stdio.h>
int global; 
int main()
{
    union u1 {
    char a;
    short b;
    int c;
};
union u1 u;
u.c = htonl(0x1122FF00);
printf("char: %d short: %d int: %d\n", u.a, u.b, u.c);
printf("(short) u.c: %d\n", (short) u.c);
printf("u.b: %d\n", u.b);
}