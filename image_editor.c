#include <stdio.h>
#include <stdlib.h>

/*
 * Include the function prototypes of all those functions implemented in image_processing.c.
 * Do not remove or modify them in any way.
 */

void remove_red();
void convert_to_black_and_white();
void instagram_square();

int main(int argc, char *argv[]) {

    // Command arguments determine the option
    if (argc == 2) {
        int choice = strtol(argv[1], NULL, 10);
        if (choice == 1) {
            remove_red();
        } else if (choice == 2) {
            convert_to_black_and_white();
        } else if (choice == 3) {
            instagram_square();
        }
    } else {
        printf("Error: Expecting one command-line argument, which needs to be either 1, 2, or 3.");
        return -1;
    }
    return 0;
}