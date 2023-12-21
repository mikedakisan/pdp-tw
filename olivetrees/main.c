#include <stdio.h>

void init()
{
    FILE* in;
    in = fopen("olivetrees.in","w");
    fclose(in);
}

int main()
{
    int Nx = 0;
    scanf("%d", &Nx);
    int My = 0;
    scanf("%d", &My);
    int Mi[My];
    for (int i = 0; i < My; i++) {
        scanf("%d", &Mi[i]);
    }

    int free_spaces[My];
    for (int i = 0; i < My; i++) {
        free_spaces[i] = Nx - Mi[i];
    }

    int max_size = 0;

    for (int i = 0; i < My; i++) {
        int height = free_spaces[i];

        for (int boundary = i; boundary < My && free_spaces[boundary] >= height; boundary++) {
            int width = boundary - i + 1;
            int rectangle_size = height * width;

            if (rectangle_size > max_size) {
                max_size = rectangle_size;
            }
        }

        for (int boundary = My - 1; boundary >= i && free_spaces[boundary] >= height; boundary--) {
            int width = i - boundary + 1;
            int rectangle_size = height * width;

            if (rectangle_size > max_size) {
                max_size = rectangle_size;
            }
        }
    }

    printf("%d", max_size);
    return 0;

    // this code works, but has probliem with output filez for soem reason pdp is shiet syka blyat mathematikkkkkk
}
