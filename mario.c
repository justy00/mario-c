#include <stdio.h>

void createMarioPyramid(int height) {
    for (int i = 0; i < height; i++) {
        
        for (int j = 0; j < height - i - 1; j++) {
            printf(" ");
        }

        for (int j = 0; j < i + 1; j++) {
            printf("#");
        }


        for (int j = 0; j < i + 1; j++) {
            printf("#");
        }

        printf("\n");
    }
}

int main() {
    int height;

    printf("Height: ");
    scanf("%d", &height);

    createMarioPyramid(height);

    return 0;
}
