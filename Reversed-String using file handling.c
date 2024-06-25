#include <stdio.h>
#include <string.h>

int main() {
    FILE *file;
    char str[100];


    file = fopen("output.txt", "w");

    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }


    printf("Enter a string: ");
    gets(str);


    printf("Reversed string: ");
    for (int i = strlen(str) - 1; i >= 0; i--) {
        printf("%c", str[i]);
        fprintf(file, "%c", str[i]);
    }
    printf("\n");


    fclose(file);

    return 0;
}
