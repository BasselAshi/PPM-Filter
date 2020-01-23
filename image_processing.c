#include <stdio.h>

/*
 * Read an image from the standard input and set the red value of each pixel to
 * zero.
 */
void remove_red()
{
    char header[3];
    scanf("%c%c", &header[0], &header[1]);
    printf("%s\n", header);

    int size[2];
    scanf("%d %d", &size[0], &size[1]);
    printf("%d %d\n", size[0], size[1]);

    int max;
    scanf("%d", &max);
    printf("%d\n", max);

    int pixel[3];
    while (scanf("%d %d %d", &pixel[0], &pixel[1], &pixel[2]) != EOF) {
        printf("0 %d %d\n", pixel[1], pixel[2]);
    }
}

/*
 * Read an image from the standard input and convert it from colour to black and white.
 */
void convert_to_black_and_white()
{
    char header[3];
    scanf("%c%c", &header[0], &header[1]);
    printf("%s\n", header);

    int size[2];
    scanf("%d %d", &size[0], &size[1]);
    printf("%d %d\n", size[0], size[1]);

    int max;
    scanf("%d", &max);
    printf("%d\n", max);

    int pixel[3];
    while (scanf("%d %d %d", &pixel[0], &pixel[1], &pixel[2]) != EOF) {
        int avg = (pixel[0] + pixel[1] + pixel[2]) / 3;
        printf("%d %d %d\n", avg, avg, avg);
    }
}

/*
 * Read an image from the standard input and convert it to a square image.
 */
void instagram_square()
{
    char header[3];
    scanf("%c%c", &header[0], &header[1]);
    printf("%s\n", header);

    int size[2];
    int smaller_size;
    scanf("%d %d", &size[0], &size[1]);
    if (size[0] <= size[1]) {
        smaller_size = size[0];
    } else {
        smaller_size = size[1];
    }
    printf("%d %d\n", smaller_size, smaller_size);

    int max;
    scanf("%d", &max);
    printf("%d\n", max);

    int pixel[3];
    int x = 1;
    int i = 1;
    
    while (scanf("%d %d %d", &pixel[0], &pixel[1], &pixel[2]) != EOF) {
        if (smaller_size < size[0]) {
            int difference = size[0] - smaller_size;
            if (x <= smaller_size) {
                printf("%d %d %d\n", pixel[0], pixel[1], pixel[2]);
                x++;
            } else {
                for (int j = 1; j < difference; j++) {
                    scanf("%d %d %d", &pixel[0], &pixel[1], &pixel[2]);
                }
                x = 1;
            }

        } else if (smaller_size < size[1]) {
            if (i > smaller_size * smaller_size) {
                break;
            }
            printf("%d %d %d\n", pixel[0], pixel[1], pixel[2]);
            i++;
        } else {
            printf("%d %d %d\n", pixel[0], pixel[1], pixel[2]);
        }
    }
}