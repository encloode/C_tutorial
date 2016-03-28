#include <stdio.h>
void moose(int buffalo, int g, int *other)
{
    *other=buffalo+*other+g;
    return;
}

int
main(void)
{
    int tiny=22,abalone=11,tiny_abalone=66;
    moose(abalone,tiny,&tiny_abalone);
    printf("%d\n", tiny_abalone);
    return;

}
