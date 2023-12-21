#include <stdio.h>

void init()
{
    FILE* in;
    in = fopen("olivetrees.in","w");
    fclose(in);
}

int main()
{
    init();
}