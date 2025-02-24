#include <stdio.h>
#include <stdlib.h>

void writeToFile(char filename[]) {
    FILE *fptr;
    fptr = fopen(filename, "w");

    if (fptr == NULL) {
        exit(1);
    }

    fprintf(fptr, "%s", "here is the file");
    fclose(fptr);
    printf("wrote to file");
}

int main() {
    writeToFile("my_file.txt");

    return 0;
}